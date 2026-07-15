#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node
{
    int val;
    struct node*next;
};

struct node*createnode(int v)
{
    struct node*n=0;
    n=(struct node*)malloc(sizeof(struct node));
    n->val=v;
    n->next=0;
    return(n);
}

struct node*push(struct node*s,int v)
{
    struct node*n=0;
    n=createnode(v);
    n->next=s;
    return(n);
}
int pop(struct node**s)
{
    struct node*t=0;
    int x=0;
    if((*s)==0)
    {
        //printf("stck underflow\n");
        return(0);
    }
    x=(*s)->val;
    t=*s;
    *s=(*s)->next;
    free(t);
    return(x);
}

bool isempty(struct node*s)
{
    if(s==NULL)
      return(true);
    return(false);
}


int top(struct node*s)
{
    if(!isempty(s))
      return(s->val);
    return(0);
}

bool isfull(struct node *s)
{
    struct node*n=0;
    n=createnode(0);
    if(n==0)
      return(true);
    free(n);
    return(false);
}

void clearstack(struct node**st)
{
    struct node*t=NULL;
    while(*st!=NULL)
    {
      pop(st);
    }
}
