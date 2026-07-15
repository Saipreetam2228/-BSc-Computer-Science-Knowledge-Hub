#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int val;
	struct node *left, * right;
};
struct node * createnode (int);
void addchild (struct node *, int, int);
struct node * find (struct node *, int);
struct node * depth (struct node *, int, int *);
void cleartree(struct node *);
int main()
{
	struct node *root=NULL, *temp=NULL;
	int c=0, q=0, p=0, i=1, x=0, *d=NULL;
	root=(struct node *)malloc(sizeof(struct node));
	d=(int *)malloc(sizeof(int));
	*d=0;
	printf("Enter the number of elements:");
	scanf("%d", &x);
	printf("Enter the root:");
	scanf("%d", &q);
	root=createnode(q);
	while(i<x)
	{
		printf("Enter the parent:");
		scanf("%d", &p);
		printf("Enter the element:");
		scanf("%d", &q);
		addchild(root,p,q);
		i++;
	}
	printf("Enter the element you want to find the depth of:");
	scanf("%d", &c);
	temp=depth(root,c,d);
	printf("%d is the depth of the asked node.\n", *d);
	cleartree(root);
}
struct node * createnode (int x)
{
	struct node *t=NULL;
	t=(struct node *)malloc(sizeof(struct node));
	t->val=x;
	t->left=NULL;
	t->right=NULL;
	return(t);
}
void addchild (struct node *root, int p, int c)
{
	struct node *t=NULL;
	t=find(root,p);
	if(t==NULL)
	{
		printf("Parent not found\n");
		return;
	}
	if(t->left!=NULL && t->right!=NULL)
	{
		printf("Third child is not allowed in a binary tree..!\n");
		return;
	}
	if(t->left==NULL)
	{
		t->left=createnode(c);
		return;
	}
	t->right=createnode(c);
}
struct node * find (struct node *root, int x)
{
	struct node *t=NULL;
	if(root==NULL || root->val==x)
		return(root);
	t=find(root->left, x);
	if(t==NULL)
		t=find(root->right, x);
	return(t);
}
struct node * depth (struct node *root, int x, int *d)
{
	struct node *t=NULL;
	int temp=0;
	if(root==NULL || root->val==x)
	{
		//printf("I have reached and d=%d.\n", *d);
		return(root);
	}
	temp=*d;
	*d=(*d)+1;
	//printf("I am going to my left and d=%d.\n", *d);
	t=depth(root->left, x, d);
	if(t==NULL)
	{
		*d=temp;
		*d=(*d)+1;
		//printf("I am going to my right and d=%d.\n", *d);
		t=depth(root->right, x, d);
	}
	if(t==NULL)
		*d=temp;
	return(t);
}
void cleartree(struct node *root)
{
	if(root==NULL)
		return;
	cleartree(root->left);
	cleartree(root->right);
	free(root);
}
