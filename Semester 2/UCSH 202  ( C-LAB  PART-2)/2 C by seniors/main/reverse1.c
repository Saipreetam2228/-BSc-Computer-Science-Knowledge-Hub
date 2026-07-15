#include <stdio.h>
#include <stdlib.h>
struct node
{
	int num;
	struct node *next;
};
struct node * createnode(int);
struct node * insertlast(struct node *, int);
void clearlist (struct node *);
void printlist (struct node *);
int main()
{
	struct node *head=NULL,*temp=NULL, *t=NULL, *t1=NULL;
	int x=0,i=0,j=0,n=0,y=0;
	printf("Enter the number of elements:");
	scanf("%d", &i);
	for(j=0;j<i;j++)
	{
		printf("Enter the element:");
		scanf("%d", &x);
		head=insertlast(head,x);
	}
	n=i/2;
	t=head;
	for(j=0;j<n;j++)
	{
		x=t->num;
		t1=t;
		while(t1->next!=temp)
			t1=t1->next;
		y=t1->num;
		temp=t1;
		t1->num=x;
		t->num=y;
		t=t->next;
	}
	printlist(head);
	clearlist(head);
}
struct node * createnode (int k)
{
	struct node *p = NULL;
	p=(struct node *)malloc(sizeof(struct node));
	p->num=k;
	p->next=NULL;
	return(p);
}
struct node * insertlast (struct node *h, int k)
{
	struct node *t=h;
	if(h==NULL)
	{
		h=createnode(k);
		return(h);
	}
	while(h->next!= NULL)
		h=h->next;
	h->next=createnode(k);
	return(t);
}
void printlist (struct node *h)
{
	printf("\n");
	while(h != NULL)
	{
		printf("%d\n", h->num);
		h=h->next;
	}
	printf("\n");
	return;
}
void clearlist (struct node *h)
{
	struct node * i=NULL;
	if(h==NULL)
	{
		printf("The given list is empty!\n");
		return;
	}	
	i=h;
	while(i!=NULL)
	{
		i=h->next;
		free(h);
		h=i;
	}
}
