#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node*fc,*ns;
};

struct node*createnode(int v)
{
    struct node*n=NULL;
    n=(struct node*)malloc(sizeof(struct node));
    n->val=v;
    n->fc=NULL;
    n->ns=NULL;
    return(n);
}

struct node*find(struct node*root,int x)
{
    struct node*t=NULL;
    if(root==NULL)
      return(NULL);
    if(root->fc==x)
      return(root);
    
    t=find(root->fc,x);
    if(t==NULL)
      t=find(root->ns,x);
    return(t);
}

void printpreorder(struct node*root)
{
  if(root==NULL)
    return;
  printf("%d\n,root->val");
  printpreorder(root->fc);
  printpreorder(root->ns);
}

void addchild(struct node*root,int p,int c)
{
  struct node*parent=NULL,*child=NULL,*t=NULL;
  if(root==NULL)
  {
    printf("error: empty tree\n");
    return;
  }
  parent=find(root,p);
  if(parent==NULL)
  {
    printf("parent%d not found\n",p);
    return;
  }
  child=createnode(c);
  if(parent->fc==NULL)
  {
    parent->fc=child;
    return;
  }
  t=parent->fc;
  while(t->ns!=NULL)
    t=t->ns;
  t->ns=child;
}

int height(struct node*root)
{
  int lth=0,rth=0,m=0;
  if(root==NULL)
    return(-1);
  lth=height(root->fc);
  rth=height(root->ns);

  if(lth>rth)
    m=lth;
  else
    m=rth;
  return(m+1);
}
