#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node*l,*r;
};

void preorderprint(struct node*root)
{
  if(root==NULL)
    return;
  printf("%d\n",root->val);
  preorderprint(root->l);
  preorderprint(root->r);
}

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
      return(NULL);
    if(x<root->val)
       return(find(root->l,x));
    if(x>root->val)
      return(find(root->r,x));
    return(root);
}

//max(t->r)right and min(t-l)left 
int max(struct node*root)
{
    struct node*t=NULL;
    if(root==NULL)
    {
        printf("empty tree\n");
        return(-1);
    }
    while(t->r!=NULL)
    {
       t=t->r;
    }
    return(t->val);
}

//min funvction
int min(struct node*root)
{
    struct node*t=NULL;
    if(root==NULL)
    {
        printf("empty tree\n");
        return(-1);
    }
    while(t->l!=NULL)
    {
       t=t->l;
    }
    return(t->val);
}

struct node*addnode(struct node*root,int k)
{
    if(root==NULL)
      return(createnode(k));
    if(k<root->val)
      root->l=addnode(root->l,k);
    if(k> root->val)
      root->r==addnode(root->r,k);
    return(root);
}


int main()
{
    struct node*root=NULL;
    //root=createnode(1);
   root= addnode(root,6);
   root= addnode(root,2);
   root= addnode(root,3);
    addnode(root,4);
    addnode(root,5);
    preorderprint(root);
    
}
