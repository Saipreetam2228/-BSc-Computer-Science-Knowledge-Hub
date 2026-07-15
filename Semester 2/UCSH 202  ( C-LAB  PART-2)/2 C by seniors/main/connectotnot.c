#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct graph
{
	int nv, **mat;
};
struct node
{
	int v;
	struct node *next;
};
struct graph * creategraph (int);
void addedge (struct graph *, int, int, int);
int * indegree (struct graph *);
int connected (struct graph *);
int equal (int *, int);
int exists (struct node *, int);
struct node * createnode (int);
struct node * insertlast (struct node *, int);
struct node * removefirst (struct node *);
void clearlist (struct node *);
int main()
{
	struct graph *g=NULL;
	int n=0, scr=0, dst=0, w=0, i=0;
	printf("Enter the number of vertices:");
	scanf("%d", &n);
	g=creategraph(n);
	while(1)
	{
		printf("Enter the edge (scr , dst , weight) input (-1, -1) to stop:");
		scanf("%d %d %d", &scr, &dst, &w);
		if(scr<0 || scr>n-1 || dst<0 || dst>n-1)
			break;
		if(scr==dst)
		{
			printf("Enter a valid edge!!\n");
			continue;
		}
		addedge(g,scr,dst,w);
	}
	if(connected(g))
		printf("It is a connected graph.\n");
	else
		printf("It is not a connected graph.\n");
}
int connected (struct graph *g)
{
	int *visit=NULL, i=0, j=0;
	struct node *h=NULL;
	visit=(int *)malloc(sizeof(int)*g->nv);
	for(i=0;i<g->nv;i++)
		visit[i]=0;
	for(i=0;i<g->nv;i++)
	{
		h=insertlast(h,i);
		while(h!=NULL)
		{
			//printf("%d is h->v in %d cycle\n", h->v, i);
			visit[h->v]=1;
			for(j=0;j<g->nv;j++)
				if(g->mat[h->v][j]>0 && g->mat[h->v][j]<INT_MAX && visit[j]!=1 && !(exists(h,j)))
					h=insertlast(h,j);
			h=removefirst(h);	
		}
		if(!(equal(visit,g->nv)))
		{
			clearlist(h);
			return(0);
		}
		else
		{
			for(j=0;j<g->nv;j++)
				visit[j]=0;
		}
	}
	return(1);
}
int equal (int *x, int a)
{
	int i=0;
	for(i=0;i<a;i++)
		if(x[i]!=1)
			return(0);
	return(1);
}
int exists (struct node *h, int x)
{
	while(h!=NULL)
	{
		if(h->v==x)
			return(1);
		h=h->next;
	}
	return(0);
}
struct graph * creategraph (int nv)
{
	int i=0, j=0;
	struct graph *g=NULL;
	g=(struct graph *)malloc(sizeof(struct graph));
	g->nv=nv;
	g->mat=(int **)malloc(sizeof(int *)*nv);
	for(i=0;i<nv;i++)
	{
		g->mat[i]=(int *)malloc(sizeof(int)*nv);
		for(j=0;j<nv;j++)
		{
			if(i==j)
				g->mat[i][j]=0;
			else
				g->mat[i][j]=INT_MAX;
		}
	}
	return(g);
}
void addedge (struct graph *g, int s, int d, int w)
{
	g->mat[s][d]=w;
}
int * indegree (struct graph *g)
{
	int *ind=NULL, i=0,j=0;
	ind=(int *)malloc(sizeof(int)*g->nv);
	for(i=0;i<g->nv;i++)
		ind[i]=0;
	for(i=0;i<g->nv;i++)
		for(j=0;j<g->nv;j++)
			if(g->mat[i][j]>0 && g->mat[i][j]<INT_MAX)
				ind[j]++;
	return(ind);
}
struct node * createnode (int k)
{
	struct node *p = NULL;
	p=(struct node *)malloc(sizeof(struct node));
	p->v=k;
	p->next=NULL;
	return(p);
}
struct node * insertlast (struct node *h, int k)
{
	struct node *temp=h;
	if(h==NULL)
		return(createnode(k));
	while(h->next!=NULL)
		h=h->next;
	h->next=createnode(k);
	return(temp);
}
struct node * removefirst (struct node *h)
{
	struct node *d=NULL;
	d=h->next;
	free(h);
	return(d);
}
void clearlist (struct node *h)
{
	struct node * i=NULL;
	if(h==NULL)
		return;	
	i=h;
	while(h!=NULL)
	{
		i=h->next;
		free(h);
		h=i;
	}
}