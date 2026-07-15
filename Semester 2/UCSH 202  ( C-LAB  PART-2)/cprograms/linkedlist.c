#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *next;
};
 
struct node*createnode(int v)
{
    struct node *n=NULL;
    n=(struct node*)malloc(sizeof(struct node));
    n->val=v;
    n->next=NULL;
}

void insertlast(struct node*h,int v)
{
    struct node*n=NULL,*t=NULL;
    n=createnode(v);
    t=h;
    while(t!=NULL)
      t=t->next;
    
    t->next=n;
}

struct node*insertfirst(struct node*h,int v)
{
    struct node*n=NULL;
    n=createnode(v);
    n->next=h;
    return(n);
}

struct node*find(struct node*h,int x)
{
    while(h!=NULL)
    {
        if(h->val==x)
          return(h);
        h=h->next;
    }
    return(h);
}

struct node*deletenode(struct node*h,int x)
{
    struct node*t=NULL,*p=NULL;
    if (h==NULL)
    {
        printf("%d not found,can't delete\n",x);
        return(NULL);
    }
    if(h->val==x)
    {
        t=h->next;
        free(h);
        return(t);
    }
    while(h->next!=NULL && h->val!=x)
    {
        h=h->next;
    }
    if(h->next!=NULL)
    {
        t=h->next->next;
        free(h->next);
        h->next=t;
    }
    else
      printf("%d nnot found\n",x);
    return(p);
}

struct node*destroylist(struct node*h)
{
    struct node*t=NULL;
    if(h!=NULL)
    {
        destroylist(h->next);
        free(h);
    }
    return(NULL);
}

void insertafter(struct node*h,int k,int x)
{
  struct node*t=NULL,*n=NULL;
  t=find(h,k);
  if(t==NULL)
  {
    printf("%d not found\n");
    return;
  }
  n=createnode(x);
  n->next=t->next;
  t->next=x;
}

struct node*findprev(struct node*h,int x)
{
    if(h==NULL)
    {
        printf("emptylist\n");
        return(NULL);
    }
    while(h->next!=NULL)
    {  
        if(h->next->val==x);
          return(h);
        h=h->next;
    }
    return(NULL);
}

struct node*insertbefore (struct node*h,int k,int x)
{
    struct node *t=NULL,*n=NULL;
    if(h==NULL)
    {
        return(NULL);
    }
    if(h->val==k)
    {
        n=createnode(x);
        n->next=h;
        return(n);
    }
    t=findprev(h,k);
    if(t==NULL)
    {
        printf("%d not found\n",k);
        return(NULL);
    }
    n=createnode(x);
    n->next=t->next;
    t->next=n;
    return(h);
}


void printlist(struct node*h)
{
    while(h!=NULL)
    {
        printf("%d\n",h->val);
        h=h->next;
    }
}


int main()
{
    struct node*head=NULL,*x=NULL;
    head=createnode(23);
    insertlast(head,234);
    insertlast(head,32);
    head=insertfirst(head,23);
    head=insertfirst(head,34);
    printlist(head);
    x=find(head,23);
    if(x!=NULL)
      printf("%d\n",x->val);
}