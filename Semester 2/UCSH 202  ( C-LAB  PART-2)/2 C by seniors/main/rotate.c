#include <stdio.h>
#include <stdlib.h>
struct node
{
	int num;
	struct node *next;
};
struct node * createnode(int);
struct node * insertlast(struct node *, int);
void printlist (struct node *);
void clearlist (struct node *);
int main()
{
	struct node *head=NULL,*temp=NULL, *nhead=NULL;
	int k=0,i=0,j=0,c1=0,c2=0;
	printf("Enter the number of elements:");
	scanf("%d", &i);
	for(j=0;j<i;j++)
	{
		printf("Enter the element:");
		scanf("%d", &k);
		head=insertlast(head,k);
	}
	printf("-----------------------------------------------------\n----------Choose from the below options--------------\nEnter 1 for Clock-wise Rotation.\nEnter 2 for Anti-Clock-Wise Rotation.\n-----------------------------------------------------\n-----------------------------------------------------\n");
	scanf("%d", &c1);
	printf("Enter the Number of rotations you want:");
	scanf("%d", &c2);
	temp=head;
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=head;
	nhead=head;
	if(c1==1)
	{
		for(j=0;j<c2;j++)
			nhead=nhead->next;
	}
	else if(c1==2)
	{
		for(j=0;j<c2;j++)
		{
			temp=head;
			while(temp->next!=nhead)
				temp=temp->next;
			nhead=temp;
		}
	}
	if(c1==1 || c1==2)
	{
		while(head->next!=nhead)
			head=head->next;
		head->next=NULL;
		printlist(nhead);
		clearlist(nhead);
	}
	else
	{
		printf("Invalid Entries..!!\n");
		clearlist(head);
	}
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
