//given a graph gives weather it is cyclic or not
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
struct node * createnode (int);
struct node * insertlast (struct node *, int);
struct node * removefirst (struct node *);
int cyclic(struct graph *);
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
	if(cyclic(g))
		printf("It is a cyclic graph.\n");
	else
		printf("It is not a cyclic graph.\n");
}
int cyclic (struct graph *g)
{
	int *ind=NULL, i=0, j=0;
	struct node *h=NULL;
	ind=indegree(g);
	for(i=0;i<g->nv;i++)
		if(ind[i]==0)
			h=insertlast(h,i);
	while(h!=NULL)
	{
		for(i=0;i<g->nv;i++)
		{
			j=0;
			if(g->mat[h->v][i]>0 && g->mat[h->v][i]<INT_MAX)
			{
				ind[i]--;
				if(ind[i]==0)
				{
					h=insertlast(h,i);
					j=j+1;
				}
			}
			if(j==0)
				return(1);
		}
		h=removefirst(h);
	}
	if(h==NULL)
		return(1);
	free(ind);
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