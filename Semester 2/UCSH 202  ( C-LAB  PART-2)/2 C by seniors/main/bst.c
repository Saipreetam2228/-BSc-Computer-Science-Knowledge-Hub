#include <stdio.h>
#include <stdlib.h>
struct node
{
	struct tree *val;
	struct node *next;
};
struct queue
{
	struct node *f, *r;
};
struct tree
{
	int val;
	struct tree *left,*right;
};
struct tree * createtree (int);
struct tree * insert (struct tree *, int);
struct tree * find (struct tree *, int);
void levelprint (struct tree *);
struct tree * min (struct tree *);
struct tree * max (struct tree *);
void printacending (struct tree *);
void printdecending (struct tree *);
void enqueue (struct queue *, struct tree *);
struct tree * dequeue (struct queue *);
struct tree * delete (struct tree *, int);
void cleartree(struct tree *);
struct node * createnode (struct tree *);
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
	printf("%d is the minimum\n", min(root)->val);
	printf("%d is the maximum\n", max(root)->val);
	printacending(root);
	printf("\n");
	printdecending(root);
	printf("Enter the value you want to remove:");
	scanf("%d", &x);
	root=delete(root,x);
	printf("\n");
	printacending(root);
	printf("\n");
	printdecending(root);
	printf("Enter the element you want to find:");
	scanf("%d", &x);
	if(find(root,x)!=NULL)
		printf("Given element is found\n");
	else
		printf("Given element is not found\n");
	levelprint(root);
	cleartree(root);
}
struct tree * createtree(int v)
{
	struct tree *temp=NULL;
	temp=(struct tree *)malloc(sizeof(struct tree));
	temp->val=v;
	temp->left=NULL;
	temp->right=NULL;
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
	return(root);
}
void levelprint (struct tree *root)
{
	struct queue *q=(struct queue *)malloc(sizeof(struct queue));
	struct tree *a=NULL;
	enqueue(q,root);
	while(q->f!=NULL)
	{
		a=dequeue(q);
		if(a!=NULL)
		{
			printf("%d\n", a->val);
			enqueue(q,a->left);
			enqueue(q,a->right);
		}
	}
	return;
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
struct tree * min (struct tree *root)
{
	while(root->left!=NULL)
		root=root->left;
	return(root);
}
struct tree * max (struct tree *root)
{
	while(root->right!=NULL)
		root=root->right;
	return(root);
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
struct tree * delete (struct tree *root, int x)
{
	struct tree *t=NULL;
	if(root==NULL)
		return(root);	
	if(root->val>x)
		root->left=delete(root->left,x);
	else if(root->val<x)
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
			t=root->left;
			free(root);
			return(t);
		}
		else if(root->left==NULL)
		{
			t=root->right;
			free(root);
			return(t);
		}
		t=max(root->left);
		root->val=t->val;
		root->left=delete(root->left,t->val);
		return(root);
	}
	return(root);
}
void cleartree (struct tree *root)
{
	if(root==NULL)
		return;
	cleartree(root->left);
	cleartree(root->right);
	free(root);
}
struct node * createnode (struct tree *x)
{
	struct node *t=NULL;
	t=(struct node *)malloc(sizeof(struct node));
	t->val=x;
	t->next=NULL;
}
void enqueue (struct queue *qp, struct tree *v)
{
	struct node *temp=NULL;
	temp=createnode(v);
	if(qp->f==NULL)
	{
		qp->f=temp;
		qp->r=temp;
		return;
	}
	qp->r->next=temp;
	qp->r=temp;
}
struct tree * dequeue (struct queue *qp)
{
	struct tree *t=NULL;
	struct node *k=NULL;
	if(qp->f==NULL)
	{
		//printf("Queue underflow Error!\n");
		return(NULL);
	}
	k=qp->f;
	t=qp->f->val;
	if(qp->r==qp->f)
		qp->r=NULL;
	qp->f=qp->f->next;
	free(k);
	return(t);
}