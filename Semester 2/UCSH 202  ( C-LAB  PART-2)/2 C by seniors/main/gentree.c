#include <stdio.h>
#include <stdlib.h>
struct tree 
{
	int val;
	struct tree *fc, *ns;
};
struct tree * createtree (int);
void addchild (struct tree *, int, int);
struct tree * find (struct tree *, int);
void printtree (struct tree *);
void printasdir (struct tree *, int);
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
	printtree(root);
	printf("\n\n");
	printasdir(root,0);
}
struct tree * createtree (int x)
{
	struct tree *t=NULL;
	t=(struct tree *)malloc(sizeof(struct tree));
	t->val=x;
	t->fc=NULL;
	t->ns=NULL;
	return(t);
}
void addchild (struct tree *root, int p, int c)
{
	struct tree *t=NULL, *q=NULL;
	t=find(root,p);
	if(t==NULL)
	{
		printf("Parent not found\n");
		return;
	}
	if(t->fc==NULL)
	{
		t->fc=createtree(c);
		return;
	}
	q=t->fc;
	while(q->ns!=NULL)
		q=q->ns;
	q->ns=createtree(c);
}
struct tree * find (struct tree *root, int x)
{
	struct tree *t=NULL;
	if(root==NULL || root->val==x)
		return(root);
	t=find(root->fc, x);
	if(t==NULL)
		t=find(root->ns, x);
	return(t);
}
void printtree (struct tree *root)
{
	if(root==NULL)
		return;
	printf("%d\n", root->val);
	printtree(root->fc);
	printtree(root->ns);
}
void printasdir (struct tree *root, int dir)
{
	if(root==NULL)
		return;
	int i=0;
	if(dir!=0)
	{
		while(i<dir)
		{
			printf("\t");
			i++;
		}
	}
	printf("%d\n", root->val);
	printasdir(root->fc, dir+1);
	printasdir(root->ns, dir);
}
