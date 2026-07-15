#include <stdio.h>
#include <stdlib.h>
struct tree
{
	int val, h;
	struct tree *left,*right;
};
int height (struct tree *);
int max (int , int );
struct tree * createtree (int );
struct tree * insert (struct tree *, int);
struct tree * find (struct tree *, int);
struct tree * slr (struct tree *);
struct tree * srr (struct tree *);
struct tree * dlrr (struct tree *);
struct tree * drlr (struct tree*);
void printacending (struct tree *);
void printdecending (struct tree *);
struct tree * maximum (struct tree *);
struct tree * delete (struct tree *, int);
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
	printacending(root);
	printf("\n\n");
	printdecending(root);
	printf("\n\n");
	/*printf("Enter the value you want to remove:");
	scanf("%d", &x);
	root=delete(root,x);
	printacending(root);
	printf("\n\n");
	printdecending(root);
	printf("\n\n");
	printf("Enter the element you want to find:");
	scanf("%d", &x);
	if(find(root,x)!=NULL)
		printf("Given element is found\n");
	else
		printf("Given element is not found\n");*/
	cleartree(root);
}
int height (struct tree *h)
{
	if(h==NULL)
		return(-1);
	return(h->h);
}
int max (int x, int y)
{
	if(x>y)
		return(x);
	return(y);
}
void printacending (struct tree *root)
{
	if(root==NULL)
		return;
	printacending(root->left);
	printf("%d\n",root->val);
	printacending(root->right);
}
void printdecending (struct tree *root)
{
	if(root==NULL)
		return;
	printdecending(root->right);
	printf("%d\n",root->val);
	printdecending(root->left);
}
struct tree * createtree (int x)
{
	struct tree * temp=NULL;
	temp=(struct tree *)malloc(sizeof(struct tree));
	temp->val=x;
	temp->right=NULL;
	temp->left=NULL;
	temp->h=0;
	return(temp);
}
struct tree * find(struct tree *root, int x)
{
	if(root==NULL)
		return(NULL);
	if(root->val==x)
		return(root);
	if(x<root->val)
		return(find(root->left,x));
	return(find(root->right,x));
}
struct tree * insert (struct tree *root, int v)
{
	if(root==NULL)
		return(createtree(v));
	if(v<root->val)
	{
		root->left=insert(root->left,v);
		if((height(root->left)-height(root->right))==2)
		{
			if(root->left->val>v)
			{
				//printf("srr on %d\n",root->val);
				root=srr(root);
			}
			else if(root->left->val<v)
			{
				//printf("dlrr on %d\n", root->val);
				root=dlrr(root);
			}
		}
	}
	else if(v>root->val)
	{
		root->right=insert(root->right,v);
		if((height(root->right)-height(root->left))==2)
		{
			if(root->right->val>v)
			{
				//printf("slr on %d\n", root->val);
				root=slr(root);
			}
			else if(root->right->val<v)
			{
				//printf("drlr on %d\n", root->val);
				root=drlr(root);
			}
		}
	}
	root->h=max(height(root->left),height(root->right))+1;
	return(root);
}
struct tree * slr (struct tree *root)
{
	struct tree *t=NULL;
	if(root==NULL || root->right==NULL)
		return(root);
	t=root->right;
	root->right=t->left;
	t->left=root;
	root->h=max(height(root->left),height(root->right))+1;
	t->h=max(height(t->left),height(t->right))+1;
	return(t);
}
struct tree * srr (struct tree *root)
{
	struct tree *t=NULL;
	if(root==NULL || root->left==NULL)
		return(root);
	t=root->left;
	root->left=t->right;
	t->right=root;
	root->h=max(height(root->left),height(root->right))+1;
	t->h=max(height(t->left),height(t->right))+1;
	return(t);
}
struct tree * dlrr (struct tree *root)
{
	if(root==NULL)
		return(NULL);
	root->left=slr(root->left);
	return(srr(root));
}
struct tree * drlr (struct tree *root)
{
	if(root==NULL)
		return(NULL);
	root->right=srr(root->right);
	return(slr(root));
}
struct tree * maximum (struct tree *root)
{
	while(root->right!=NULL)
		root=root->right;
	return(root);
}
struct tree * delete (struct tree *root, int x)
{
	struct tree *t=NULL;
	if(root==NULL)
		return(root);	
	if(root->val>x)
		root->left=delete(root->left,x);
	else  if(root->val<x)
		root->right=delete(root->right,x);
	else
	{
		if(root->left==NULL && root->right==NULL)
		{
			free(root);
			return(NULL);
		}
		else if(root->right==NULL)
		{
			t=root->right;
			free(root);
			return(t);
		}
		else if(root->left==NULL)
		{
			t=root->right;
			free(root);
			return(t);
		}
		t=maximum(root->left);
		root->val=t->val;
		root->left=delete(root->left,t->val);
		return(root);
	}
	return(root);
}
void cleartree(struct tree *root)
{
	if(root==NULL)
		return;
	cleartree(root->left);
	cleartree(root->right);
	free(root);
}