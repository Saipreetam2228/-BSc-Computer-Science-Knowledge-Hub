//printing in level order
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
	struct tree *left, * right;
};
struct tree * createtree (int);
void addchild (struct tree *, int, int);
struct tree * find (struct tree *, int);
void levelprint (struct tree *);
void printtree (struct tree *);
void cleartree(struct tree *);
void enqueue (struct queue *, struct tree *);
struct tree * dequeue (struct queue *);
struct node * createnode (struct tree *);
int main()
{
	struct tree *root=NULL;
	int c=0, q=0, p=0, i=0, x=0;
	root=(struct tree *)malloc(sizeof(struct tree));
	root=createtree(3);
	addchild(root,3,2);
	addchild(root,3,1);
	addchild(root,2,4);
	addchild(root,2,5);
	addchild(root,1,7);
	addchild(root,1,8);
	addchild(root,4,10);
	addchild(root,4,13);
	addchild(root,5,9);
	addchild(root,5,14);
	addchild(root,7,12);
	addchild(root,7,15);
	addchild(root,8,17);
	addchild(root,8,16);
	//printtree(root);
	//printf("\n\n");
	levelprint(root);
	cleartree(root);
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
void printtree (struct tree *root)
{
	if(root==NULL)
		return;
	printf("%d\n", root->val);
	printtree(root->left);
	printtree(root->right);
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