#include <stdio.h>
#include <stdlib.h>
struct queue
{
	struct tree *f, *r;
};
struct tree 
{
	int val;
	struct tree *left, *right, *next;
};
struct tree * createtree (int);
struct tree * insert (struct tree *, int, struct queue *);
void printtree (struct tree *);
void cleartree(struct tree *);
void enqueue (struct queue *, struct tree *);
struct tree * dequeue (struct queue *);
int main()
{
	int a=0,x=0;
	struct tree *root=NULL;
	struct queue *q=(struct queue *)malloc(sizeof(struct queue));
	printf("Enter the number of elements:");
	scanf("%d", &a);
	while(a!=0)
	{
		printf("Enter the element:");
		scanf("%d", &x);
		root=insert(root,x,q);
		a=a-1;
	}
	printtree(root);
}

struct tree * insert (struct tree *root, int x, struct queue *q)
{
	struct tree *temp=createtree(x), *t=NULL;
	if(root==NULL)
	{
		enqueue(q,temp);
		return(temp);
	}
	while(temp!=NULL)
	{
		if(q->f->left==NULL)
		{
			q->f->left=temp;
			enqueue(q,temp);
			temp=NULL;
		}
		else if(q->f->right==NULL)
		{
			q->f->right=temp;
			enqueue(q,temp);
			temp=NULL;
		}
		else
			t=dequeue(q);
	}
	return(root);
}
void printtree (struct tree *root)
{
	if(root==NULL)
		return;
	printtree(root->left);
	printf("%d\n", root->val);
	printtree(root->right);
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
void cleartree (struct tree *root)
{
	if(root==NULL)
		return;
	cleartree(root->left);
	cleartree(root->right);
	free(root);
}
void enqueue (struct queue *qp, struct tree *v)
{
	if(qp->f==NULL)
	{
		qp->f=v;
		qp->r=v;
		return;
	}
	qp->r->next=v;
	qp->r=v;
}
struct tree * dequeue (struct queue *qp)
{
	struct tree *t=NULL;
	if(qp->f==NULL)
		return(NULL);
	t=qp->f;
	if(qp->r==qp->f)
		qp->r=NULL;
	qp->f=qp->f->next;
	return(t);
}