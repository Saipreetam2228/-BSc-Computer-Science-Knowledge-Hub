#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct graph
{
    int count;
    struct vertex *first;
};
struct vertex
{
    int id;
    int indegree;
    int outdegree;
    bool processed;
    struct vertex *next;
    struct arc *first;
};
struct arc
{
    int weight;
    struct vertex *destination;
    struct arc *next;
};

struct graph *creategraph()
{
    struct graph *g=NULL;
    g=(struct graph*)malloc(sizeof(struct graph));
    g->count=0;
    g->first=NULL;
    return(g);
}

struct vertex*createvertex(int id)
{
    struct vertex *v=NULL;
    v=(struct vertex*)malloc(sizeof(struct vertex));
    v->id=id;
    v->indegree=v->outdegree=0;
    v->processed=false;
    v->next=v->first=NULL;
    return(v);
}

struct arc *createarc(int w)
{
    struct arc *a=NULL;
    a=(struct arc*)malloc(sizeof(struct arc));
    a->weight=w;
    a->destination=NULL;
    a->next=NULL;
    return(a);
}

struct vertex *find(struct graph *g,int id)
{
    struct vertex *t=NULL;
    if(g==NULL)
      return(NULL);
    t=g->first;
    while(t!=NULL)
    {
        if(t->id==id)
          return(t);
        t=t->next;
    }
    return(NULL);
}

void addvertex(struct graph *g,int id)
{
    struct vertex *v=NULL,*t=NULL;
    if(g==NULL)
      return;
    v=find(g,id);
    if(v!=NULL)
    {
        printf("vertex %d already exists \n",id);
        return;
    }
    v=createvertex(id);
    g->count=g->count+1;
    if(g->first==NULL)
    {
       g->first=v;
       return;
    }
    if(id < g->first->id)
    {
        v->next=g->first;
        g->first=v;
        return;
    }
    t=g->first;
    while(t->next !=NULL && t->next->id<id)
      t=t->next;
    v->next=t->next;
    t->next=v;
}

void addarc(struct graph *g,int from,int to,int w)
{
    struct vertex *src=NULL,*dst=NULL;
    struct arc*a=NULL,*t=NULL;
    src=find(g,from);
    if(src ==NULL)
    {
        printf("source vertex not found\n");
        return;
    }
    dst=find(g,to);
    if(dst==NULL)
    {
        printf("destination vertex not found\n");
        return;
    }
    a=createarc(w);
    a->destination=dst;
    src->outdegree+=1;
    dst->indegree+=1;

    if(src->first==NULL)
    {
        src->first=a;
        return;
    }
    if(w<=src->first->weight)
    {
        a->next=src->first;
        src->first=a;
        return;
    }
    t=src->first;
    while(t->next!=NULL && t->next->weight<=w)
      t=t->next;
    a->next=t->next;
    t->next=a;
}

void bftraversal(struct graph*g)
{
    struct queue *q=createqueue();
    struct vertex *v=NULL;
    struct arc *a=NULL;

    if(g==NULL)
      return;
    resetprocessed(g);
    if(g->first!=NULL)
      enqueue(q,g->first);
      while(!isempty(q))
      {
        v=dequeue(q);
        printf("%d \n",v->id);
        v->processed=true;
        a=v->first;
        while(a!=NULL)
        {
            if(!(a->destination->processed))
              enqueue(q,a->destination);
            a=a->next;
        }
      }
}

void resetprocessed(struct graph *g)
{
    struct vertex *v=NULL;
    if(g==NULL)
      return;
    v=g->first;
    while(v!=NULL)
    {
        v->processed=false;
        v=v->next;
    }
}

bool pathexists(struct graph*g,int src,int dst)
{
    struct queue*q=createqueue();
    struct vertex *v=NULL;
    struct arc*a=NULL;

    if(g==NULL || src<0 || dst <0 ||src>=g->count || dst>=g->count)
      return(false);
    v=find(g,src);
    enqueue(q,v);
    while(!isempty(q))
    {
        v=dequeue(q);
        v->processed=true;
        a=v->first;
        while(a!=NULL)
        {
            if(a->destination->id==dst)
              return(true);
            if(!(a->destination->processed))
             enqueue(q,a->destination);
          a=a->next;
        }
    }
    return(false);
}

bool isconnected(struct graph *g)
{

}

bool iscomplete(struct graph*g)
{

}

bool hascycle(struct graph *g)
{

}





int main()
{
    int nv=0,i=0,src=0,dst=0,w=0;
    struct graph*g=creategraph();
    printf("enter the no.of vertices:");
    scanf("%d", &nv);
    for(i=0;i<nv;i=i+1)
      addvertex(g,i);
    printf("enter edges(for vertices 0 to %d,<src><dst><weight>,-1-1-1 to end):",nv-1);
    while(src>-1 && dst > -1 && w>-1)
    {
        scanf("%d %d %d",&src,&dst,&w);
        if(src>=0 && dst >=0 && src< nv && dst<nv && src !=dst && w>0)
          addedge(g,src,dst,w);
    }
    printf("graph is ready .breadth first traversal from 0 as follows:\n");
    bftraversal(g);
    printf("depth first traversal from 0 s follows :\n");
    dftraversal(g);
    prinft("check path between:");
    scanf("%d %d ",&src ,&dst);
    if(pathexists(g,src,dst))
      printf("yes\n");
    else 
      printf("no\n");
}
