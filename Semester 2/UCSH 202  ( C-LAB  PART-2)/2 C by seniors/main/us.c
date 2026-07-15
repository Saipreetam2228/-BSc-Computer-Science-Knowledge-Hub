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
	struct node *head1=NULL, *head2=NULL, *h3=NULL, *temp1=NULL, *temp2=NULL;
	int x=0,y=0,i=0,j=0,k=0;
	printf("Enter the number of inputs for the first list:");
	scanf("%d", &x);
	printf("Enter the number of inputs for the second list:");
	scanf("%d", &y);
	printf("\nEnter the values for the first list\n");
	for(i=0;i<x;i++)
	{
		printf("Enter the element:");
		scanf("%d", &k);
		head1=insertlast(head1,k);
	}
	printf("\nEnter the values for the second list\n");
	for(i=0;i<y;i++)
	{
		printf("Enter the element:");
		scanf("%d", &k);
		head2=insertlast(head2,k);
	}
	temp1=head1;
	temp2=head2;
	while(temp1!=NULL)
	{
		if(temp2==NULL)
			break;
		if(temp1->num==temp2->num)
		{
			h3=insertlast(h3,temp1->num);
			temp1=temp1->next;
			temp2=temp2->next;
		}
		else if(temp1->num>temp2->num)
		{
			h3=insertlast(h3,temp2->num);
			temp2=temp2->next;
		}
		else if(temp1->num<temp2->num)
		{
			h3=insertlast(h3,temp1->num);
			temp1=temp1->next;
		}
	}
	while(temp1!=NULL)
	{
		h3=insertlast(h3,temp1->num);
		temp1=temp1->next;
	}
	while(temp2!=NULL)
	{
		h3=insertlast(h3, temp2->num);
		temp2=temp2->next;
	}
	printlist(h3);
	clearlist(h3);
	clearlist(head1);
	clearlist(head2);
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
