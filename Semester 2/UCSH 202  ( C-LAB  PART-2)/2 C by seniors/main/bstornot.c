//BST or not
#include <stdio.h>
#include <stdlib.h>
struct tree 
{
	int val;
	struct tree *left, * right;
};
struct tree * createtree (int);
void addchild (struct tree *, int, int);
struct tree * find (struct tree *, int);
int bst(struct tree *);
void cleartree(struct tree *);
int main()
{
	struct tree *root=NULL;
	int q=0, p=0, i=0, x=0;
	root=(struct tree *)malloc(sizeof(struct tree));
	printf("Enter the number of elements:");
	scanf("%d", &x);
	printf("Enter the element:");
	scanf("%d", &q);
	root=createtree(q);
	while(i<x-1)
	{
		printf("Enter the parent:");
		scanf("%d", &p);
		printf("Enter the element:");
		scanf("%d", &q);
		addchild(root,p,q);
		i++;
	}
	if(bst(root))
		printf("Is a BST\n");
	else
		printf("Is not a BST\n");
	cleartree(root);
}
struct tree * createtree (int x)
{
	struct tree *t=NULL;
	t=(struct tree *)malloc(sizeof(struct tree));
	t->val=x;
	t->left=NULL;
	t->right=NULL;
	return(t);
}
void addchild (struct tree *root, int p, int c)
{
	struct tree *t=NULL;
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
		t->left=createtree(c);
		return;
	}
	t->right=createtree(c);
}
struct tree * find (struct tree *root, int x)
{
	struct tree *t=NULL;
	if(root==NULL || root->val==x)
		return(root);
	t=find(root->left, x);
	if(t==NULL)
		t=find(root->right, x);
	return(t);
}
int bst (struct tree *root)
{
	if(root==NULL)
		return(1);
	if(root->left==NULL || root->right==NULL)
		return(1);
	if(root->val<root->left->val || root->val>root->right->val)
		return(0);
	else
		if(bst(root->left))
			if(bst(root->right))
				return(1);
	return(0);
}
void cleartree(struct tree *root)
{
	if(root==NULL)
		return;
	cleartree(root->left);
	cleartree(root->right);
	free(root);
}
