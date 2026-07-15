#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int val;
    struct node*l,*r;
};

struct node*createnode(int v)
{
    struct node*n=NULL;
    n=(struct node*)malloc(sizeof(struct node));
    n->val=v;
    n->l=NULL;
    n->r=NULL;
    return(n);
}

struct node*find(struct node*root,int x)
{
    if(root==NULL)
      return(NULL)
    if(x<root->val)
      return(find(root->l,x));
    if(x>root->val)
      return(find(root->r,x));

    return(root);
}
int min(struct node*root)
{
    struct node
}