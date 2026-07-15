#include <stdio.h>
#include <stdlib.h>
struct node
{
	int val;
	struct node *next;
};
struct stack
{
	struct node *top;
};
int pop (struct stack *);
struct node * createnode (int);
void push(struct stack *, int);
int main()
{
	int k=0;
	struct stack s1={};
	push(&s1,7);
	push(&s1,560);
	push(&s1,63);
	push(&s1,723);
	push(&s1,7789);
	push(&s1,7458);
	push(&s1,7123);
	while(s1.top!=NULL)
	{
		k=pop(&s1);
		printf("%d\n",k);
	}
}
int pop(struct stack *h)
{
	int k=0;
	struct node	 *t=NULL;
	if(h->top==NULL)
	{
		printf("Underflow Error!!\n");
		return(-1);
	}
	k=h->top->val;
	t=h->top;
	h->top=h->top->next;
	free(t);
	return(k);
}
void push(struct stack *h, int v)
{
	struct node *n=createnode(v);
	n->next=h->top;
	h->top=n;
	return;
}
struct node * createnode (int k)
{
	struct node *p = NULL;
	p=(struct node *)malloc(sizeof(struct node));
	p->val=k;
	p->next=NULL;
	return(p);
}
