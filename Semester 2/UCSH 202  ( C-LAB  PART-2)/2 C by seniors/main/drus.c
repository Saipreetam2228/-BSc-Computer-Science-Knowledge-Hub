#include <stdio.h>
#include <stdlib.h>
struct node
{
	int num;
	struct node *next;
};
struct node * createnode(int);
struct node * insertlast(struct node *, int);
struct node * removenode (struct node *, int);
void printlist (struct node *);
void clearlist (struct node *);
int main()
{
	struct node *head=NULL,*temp=NULL;
	int k=0,i=0,j=0,x=0;
	printf("Enter the number of elements:");
	scanf("%d", &i);
	for(j=0;j<i;j++)
	{
		printf("Enter the element:");
		scanf("%d", &k);
		head=insertlast(head,k);
	}
	temp=head;
	while(temp!=NULL)
	{
		temp=removenode(temp,temp->num);
		temp=temp->next;
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
struct node * removenode (struct node *h, int x)
{
	struct node *d=h,*temp=NULL;
	while(d->next!=NULL)
	{
		if(d->next->num==x)
		{
			temp=d->next->next;
			free(d->next);
			d->next=temp;
		}
		else
			d=d->next;
	}
	return(h);
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
