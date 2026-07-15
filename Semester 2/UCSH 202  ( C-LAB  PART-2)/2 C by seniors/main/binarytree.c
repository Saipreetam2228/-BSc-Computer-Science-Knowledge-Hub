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
void printtree1 (struct tree *);
void printtree2 (struct tree *);
void printtree3 (struct tree *);
void cleartree(struct tree *);
int main()
{
	struct tree *root=NULL;
	int c=0, q=0, p=0, i=0;
	root=(struct tree *)malloc(sizeof(struct tree));
	printf("Enter the element:");
	scanf("%d", &q);
	root=createtree(q);
	while(i<10)
	{
		printf("Enter the parent:");
		scanf("%d", &p);
		printf("Enter the element:");
		scanf("%d", &q);
		addchild(root,p,q);
		i++;
	}
	printf("\n-----------------------------------------------------\n----------Choose from the below options--------------\nEnter 1 to print the tree in INFIX way.\nEnter 2 to print the tree in POSTFIX way.\nEnter 3 to print the tree in PREFIX way.\n-----------------------------------------------------\n-----------------------------------------------------\n");
	scanf("%d", &c);
	switch(c)
	{
		case 1: printtree1(root); break;
		case 2: printtree2(root); break;
		case 3: printtree3(root); break;
		default: printf("Invalid Entry..!!\n");
	}
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
void printtree1 (struct tree *root)
{
	if(root==NULL)
		return;
	printtree1(root->left);
	printf("%d\n", root->val);
	printtree1(root->right);
}
void printtree2 (struct tree *root)
{
	if(root==NULL)
		return;
	printtree2(root->left);
	printtree2(root->right);
	printf("%d\n", root->val);
}
void printtree3 (struct tree *root)
{
	if(root==NULL)
		return;
	printf("%d\n", root->val);
	printtree3(root->left);
	printtree3(root->right);
}
void cleartree(struct tree *root)
{
	if(root==NULL)
		return;
	cleartree(root->left);
	cleartree(root->right);
	free(root);
}
