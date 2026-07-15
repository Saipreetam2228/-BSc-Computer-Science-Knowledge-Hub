#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node 
{
    int val;
    struct node*next;
};

struct node *createnode(int v)
{
    struct node *n=NULL;
    n=(struct node*)malloc(sizeof(struct node));
    n->val=v;
    n->next=NULL;
    return(n);
}

void insertlast(struct node*h,int v)
{
    struct node*n=NULL;
    n=h;
    while(n->next!=NULL)
    {
        n=n->next;
    }
    n->next=h;
}

struct node *insertfirst(struct node*h,int v)
{
    struct node *n=NULL;
    n->next =h;
    return(n);
}

void printlist(struct node*h)
{
    struct node*n=NULL,*t=NULL;
    t=h;
    while(t!=NULL)
    {
        printf("%d\n",n->val);
        t=t->next;
    }
}
