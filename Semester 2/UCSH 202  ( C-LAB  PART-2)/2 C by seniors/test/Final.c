#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int val,rank;
  struct Node *l, *r;
};

struct Node* CreateNode(int v)
{
  struct Node *n= NULL;
  n= (struct Node*)malloc(sizeof(struct Node));
  n->val= v;
  n->rank=1;
  n->l= n->r= NULL;
}

void increase (struct Node *root)
{
  if(root==NULL)
    return;
  root->rank++;
  increase(root->l);
  increase(root->r);
  return;
}

void printtree (struct Node *root)
{
	if(root==NULL)
		return;
	printtree(root->l);
	printf("%d has %d as its rank\n", root->val, root->rank);
	printtree(root->r);
}

struct Node* Insert(struct Node *root, int v)
{
  if(root == NULL)
    return(CreateNode(v));
  if(v < root->val)
  {
    if(root->l!=NULL && root->l->val<v)
    {
      root->l= Insert(root->l,v);
      root->rank++;
      increase(root->r);
    }
    else
    {
      root->l= Insert(root->l,v);
      if(root->l->r==NULL)
        root->l->rank= root->rank;
      root->rank++;
      increase(root->r);
    }
  }
  else if(v > root->val)
  {
    if(root->r!=NULL && root->r->val>v)
    {
      root->r=Insert(root->r,v);
    }
    else
    {
      root->r= Insert(root->r,v);
      if(!(root->r->val<v))
        root->r->rank= root->rank+1;
    }
  }
  return(root);
}

struct Node * find (struct Node *root, int x)
{
	struct Node *t=NULL;
	if(root==NULL || root->val==x)
		return(root);
	t=find(root->l, x);
	if(t==NULL)
		t=find(root->r, x);
	return(t);
}

int rank(struct Node *root, int x)
{
  struct Node *temp=find(root,x);
  if(temp!=NULL)
    return(temp->rank);
  return(0);
}

int main()
{
  struct Node *root= NULL;
  int r= 0, n= 0;
  root= Insert(root,-8);
  root= Insert(root,12);
  root= Insert(root,4);
  root= Insert(root,2);
  root= Insert(root,6);
  root= Insert(root,-10);
  root= Insert(root,14);
  root= Insert(root,-7);
  root= Insert(root,-11);

  printf("Enter the number whose rank is to be found: ");
  scanf("%d",&n);
  r= rank(root,n);
  printf("Rank of %d is %d\n\n",n,r);
  printtree(root);
}
