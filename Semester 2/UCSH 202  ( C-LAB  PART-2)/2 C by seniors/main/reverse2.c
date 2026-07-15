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
	struct node *head=NULL,*temp=NULL,*p=NULL,*q=NULL,*nhead=NULL;
	int k=0,i=0,j=0;
	printf("Enter the number of elements:");
	scanf("%d", &i);
	for(j=0;j<i;j++)
	{
		printf("Enter the element:");
		scanf("%d", &k);
		head=insertlast(head,k);
	}
	temp=head;
	while(temp->next!=NULL)
		temp=temp->next;
	nhead=temp;
	while(head->next!=NULL)
	{
		temp=head;
		while(temp->next->next!=NULL)
			temp=temp->next;
		p=temp;
		q=nhead;
		while(q->next!=NULL)
			q=q->next;
		q->next=p;
		p->next=NULL;
	}
	printlist(nhead);
	clearlist(nhead);	
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
