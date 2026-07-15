#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *l,*r;
};

struct node* createnode(int v)
{
    struct node*n=(struct node*)malloc(sizeof(struct node));
    n->val=v;
    n->l=NULL;
    n->r=NULL;
    return(n);
}

struct node*find(struct node*root,int x)
{
    struct node*t=NULL;
    if(root==NULL)
      return(NULL);
    
    if(root->val==x)
      return(root);

    t=find(root->l,x);
    if(t==NULL)
      t=find(root->r,x);
    return(t);
}

void addchild(struct node*root,int p,int c)
{ 
    struct node*parent=NULL,*child=NULL;

    if(root==NULL)
      return;
    parent=find(root,p);
    if(parent==NULL)
    {
        printf("error: %d not found\n",p);
        return;
    }
    if(parent->l!=NULL && parent->r!=NULL)
    {
       printf("No vacency\n");
       return;
    }
    child=createnode(c);
    if(parent->l==NULL)
      parent->l=child;
    else
      parent->r=child;
}

struct node*delete (struct node*root,int x)
{
  struct node*parent=NULL;
  if(root==NULL)
    return(root);
  if(root->val==x)
  {
    deletenode(root);
    return(NULL);
  }
  parent=findparent(root,x);
  if(parent==NULL)
  {
    printf("error:%d not found\n",x);
    return(root);
  }

  if(parent->l!=NULL && parent->l->val==x)
  {
    deletenode(parent->l);
    parent->l=NULL;
    return(root);
  }
  deletenode(parent->r);
  parent->r=NULL;
  return(root);
}

//assume that x will never be the value of root
struct node*findparent(struct node*root,int x)
{
  struct  node*t=NULL;
  if(root==NULL)
    return(NULL);
  if((root->l!=NULL&& root->l->val==x)||(root->r!=NULL &&root->r->val==x))
    reutrn(root);
  
  t=findparent(root->l,x);
  if(t==NULL)
    t=findprent(root->r,x);
  return(t);
}

void deletenode(struct node*root)
{
  if(root==NULL)
    return;
  deletenode(root->l);
  deletenode(root->r);
  free(root);
}


void preorderprint(struct node*root)
{
    if(root==NULL)
      return;
    printf("%d\n",root->val);
    preorderprint(root->l);
    preorderprint(root->r);
}

void inorderprint(struct node*root)
{
    if(root==NULL)
      return;
    inorderprint(root->l);
    printf("%d\n",root->val);
    inorderprint(root->r);
}

void postorderprint(struct node*root)
{
    if(root==NULL)
      return;
    printf("%d\n",root->val);
    postorderprint(root->l);
    postorderprint(root->r);
}


int main()
{
    struct node*root=NULL;
    root=createnode(1);
    addchild(root,1,2);
    addchild(root,1,3);
    addchild(root,2,4);
    addchild(root,2,5);
    preorderprint(root);
    printf("================done==============\n");
    inorderprint(root);
}