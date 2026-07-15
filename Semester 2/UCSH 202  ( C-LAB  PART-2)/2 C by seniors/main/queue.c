//Queue and its functions
#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int val;
	struct node *next;
};
struct queue
{
	struct node *f, *r;
};
void enqueue (struct queue *, int);
int dequeue (struct queue *);
int main()
{
	struct queue *t=NULL;

}
void enqueue (struct queue *qp, int v)
{
	struct node *n=createnode(v);
	if(qp->f==NULL)
	{
		qp->f=n;
		qp->r=n;
		return;
	}
	qp->r->next=n;
	qp->r=n;
}
int dequeue (struct node *qp)
{
	int v=0;
	struct node *t=NULL;
	if(qp->f==NULL)
	{
		printf("Queue underflow Error!\n");
		return(-1);
	}
	v=qp->f->val;
	t=qp->f;
	if(qp->r==qp->f)
		qp->r=NULL;
	qp->f=qp->f->next;
	free(t);
	return(v);
}