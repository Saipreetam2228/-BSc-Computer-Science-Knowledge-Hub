//BST with height AVL or not
#include <stdio.h>
#include <stdlib.h>
struct tree
{
	int val, h;
	struct tree *left,*right;
};
struct tree * createtree (int);
struct tree * insert (struct tree *, int);
int max (int, int);
int height (struct tree *);
int avl (struct tree *);
void cleartree (struct tree *);
int main()
{
	struct tree *root=NULL;
	int x=0,y=0,i=0;
	printf("Enter the number of elements:");
	scanf("%d", &y);
	for (i = 0; i < y; i++)
	{
		printf("Enter the value:");
		scanf("%d", &x);
		root=insert(root,x);
	}
	if(avl(root))
		printf("Is is an AVL tree.\n");
	else
		printf("Is not an AVL tree.\n");
	cleartree(root);
}
struct tree * createtree(int v)
{
	struct tree *temp=NULL;
	temp=(struct tree *)malloc(sizeof(struct tree));
	temp->val=v;
	temp->left=NULL;
	temp->right=NULL;
	temp->h=0;
	return(temp);
}
struct tree * insert(struct tree *root, int v)
{
	if(root==NULL)
		return(createtree(v));
	if(root->val>v)
		root->left=insert(root->left,v);
	else if(root->val<v)
		root->right=insert(root->right,v);
	root->h=max(height(root->left),height(root->right))+1;
	return(root);
}
int avl (struct tree *root)
{
	if(root==NULL)
		return(1);
	if((height(root->left)-height(root->right))>1 || (height(root->right)-height(root->left))>1)
		return(0);
	else
		if(avl(root->left))
			if(avl(root->right))
				return(1);
	return(0);
}
int max (int x, int y)
{
	if(x>y)
		return(x);
	return(y);
}
int height (struct tree *root)
{
	if(root==NULL)
		return(-1);
	return(root->h);
}
void cleartree(struct tree *root)
{
	if(root==NULL)
		return;
	cleartree(root->left);
	cleartree(root->right);
	free(root);
}