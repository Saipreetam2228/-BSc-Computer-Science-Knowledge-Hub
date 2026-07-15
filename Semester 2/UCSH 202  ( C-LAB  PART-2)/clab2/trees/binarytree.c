#include<stdio.h>
#include<stdlib.h>

//structure of a binary tree
struct node
{
    int val;
    struct node*l,*r;
};

struct node*createnode(int v);
struct node*find(struct node*root,int x);
void addchild(struct node*root,int p,int c);
void deletenode(struct node*root);
struct node*delete(struct node*root,int x);
struct node*findparent(struct node*root,int x);
void preorderprint(struct node*root);
void inorderprint(struct node*root);
void postorderprint(struct node*root);

//creating a node for a binay tree 
struct node*createnode(int v)
{
    struct node*n=NULL;
    n=(struct node*)malloc(sizeof(struct node));
    n->val=v;
    n->l=NULL;
    n->r=NULL;
    return(n);
}

//finding the root location of a binary tree
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

//adding child to a node for binary tree
void addchild(struct node*root,int p,int c)
{
    struct node*parent=NULL,*child=NULL;
    if(root==NULL)
    {
      printf("error:empty tree\n");
      return;
    }
    parent=find(root,p);
    if(parent==NULL)
    {
      printf("error: %dparent not found\n",p);
      return;
    }
    if(parent->l!=NULL && parent->r!=NULL)
    {
        printf("no space \n");
        return;
    }
    child=createnode(c);
    if(parent->l==NULL)
      parent->l=child;
    else
      parent->r=child;
}

//deleting the node
void deletenode(struct node*root)
{
  if(root==NULL)
    return;
  deletenode(root->l);
  deletenode(root->r);

  free(root);
}

//delete the node
struct node*delete(struct node*root,int x)
{
  struct node*parent=NULL;
  if(root==NULL)
    return(NULL);
  if(root->val==x)
  {
    deletenode(root);
    return(NULL);
  }
  parent=findparent(root,x);
  if(parent==NULL)
  {
    printf("error: %d not found\n",x);
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

//find parent fuction in the binary tree
struct node*findparent(struct node*root,int x)
{
  struct node*t=NULL;
  if(root==NULL)
    return(NULL);
  if((root->l!=NULL && root->l->val==x)|| (root->r!=NULL && root->r->val==x))
    return(root);
  t=findparent(root->l,x);
  if(t==NULL)
    t=findparent(root->r,x);
  return(t);
}

//preorder(me,l,r),inorder(l,me,r), postorder(l,r,me)  traversal 

//   preorder print function for a binary tree
void preorderprint(struct node*root)
{
  if(root==NULL)
    return;
  printf("%d\n",root->val);
  preorderprint(root->l);
  preorderprint(root->r);
}

//   inorder print function for a binary tree
void inorderprint(struct node*root)
{
  if(root==NULL)
    return;
  inorderprint(root->l);
  printf("%d\n",root->val);
  inorderprint(root->r);
}

//   postorder print function for a binary tree
void postorderprint(struct node*root)
{
  if(root==NULL)
    return;
  postorderprint(root->l);
  postorderprint(root->r);
  printf("%d\n",root->val);
}


int main()
{
    struct node*root=NULL, *t=NULL;
    root=createnode(1);
    addchild(root,1,2);
    addchild(root,1,3);
    addchild(root,2,5);
    addchild(root,2,4);
    addchild(root,5,10);
    preorderprint(root);
    t=find(root,10);
    //printf("\n%d\n",t->val);
    root=delete(root,5);
        preorderprint(root);

    
}
