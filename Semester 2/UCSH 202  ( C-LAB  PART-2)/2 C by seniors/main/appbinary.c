#include <stdio.h>
#include <stdlib.h>
struct tree
{
	char val;
	struct tree *left, * right;
};
struct tree * createtree (char);
void addchild (struct tree *, char, char);
struct tree * find (struct tree *, char);
void infixprint (struct tree *);
void postfixprint (struct tree *);
void prefixprint (struct tree *);
void cleartree(struct tree *);
int main()
{
	struct tree *root=NULL, *root1=NULL;
	root=(struct tree *)malloc(sizeof(struct tree));
	root1=(struct tree *)malloc(sizeof(struct tree));
	root=createtree('*');
	addchild(root, '*', '+');
	addchild(root, '*', 'c');
	addchild(root, '+', 'a');
	addchild(root, '+', 'b');
	root1=createtree('+');
	addchild(root1, '+', 'a');
	addchild(root1, '+', '*');
	addchild(root1, '*', 'b');
	addchild(root1, '*', '-');
	addchild(root1, '-', 'c');
	addchild(root1, '-', '/');
	addchild(root1, '/', 'd');
	addchild(root1, '/', 'e');
	
	/*printf("\n-----------------------------------------------------\n----------Choose from the below options--------------\nEnter 1 to print the tree in INFIX way.\nEnter 2 to print the tree in POSTFIX way.\nEnter 3 to print the tree in PREFIX way.\n-----------------------------------------------------\n-----------------------------------------------------\n");
	scanf("%d", &c);
	switch(c)
	{
		case 1: infixprint(root); break;
		case 2: postfixprint(root); break;
		case 3: prefixprint(root); break;
		default: printf("Invalid Entry..!!\n");
	}*/
	infixprint(root);
	printf("\n");
	infixprint(root1);
	printf("\n");
	postfixprint(root);
	printf("\n");
	postfixprint(root1);
	printf("\n");
	cleartree(root);
	cleartree(root1);
}
struct tree * createtree (char x)
{
	struct tree *t=NULL;
	t=(struct tree *)malloc(sizeof(struct tree));
	t->val=x;
	t->left=NULL;
	t->right=NULL;
	return(t);
}
void addchild (struct tree *root, char p, char c)
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
struct tree * find (struct tree *root, char x)
{
	struct tree *t=NULL;
	if(root==NULL || root->val==x)
		return(root);
	t=find(root->left, x);
	if(t==NULL)
		t=find(root->right, x);
	return(t);
}
void infixprint (struct tree *root)
{
	if(root==NULL)
		return;
	if(root->left!=NULL && (root->left->val >='%' && root->left->val <='/'))
		printf("(");
	infixprint(root->left);
	if(root->left!=NULL && (root->left->val >='%' && root->left->val <='/'))
		printf(")");
	printf("%c", root->val);
	if(root->right!=NULL && (root->right->val >='%' && root->right->val <='/'))
		printf("(");
	infixprint(root->right);
	if(root->right!=NULL && (root->right->val >='%' && root->right->val <='/'))
		printf(")");
	
}
void postfixprint (struct tree *root)
{
	if(root==NULL)
		return;
	postfixprint(root->left);
	postfixprint(root->right);
	printf("%c", root->val);
}
void prefixprint (struct tree *root)
{
	if(root==NULL)
		return;
	printf("%d\n", root->val);
	prefixprint(root->left);
	prefixprint(root->right);
}
void cleartree(struct tree *root)
{
	if(root==NULL)
		return;
	cleartree(root->left);
	cleartree(root->right);
	free(root);
}
