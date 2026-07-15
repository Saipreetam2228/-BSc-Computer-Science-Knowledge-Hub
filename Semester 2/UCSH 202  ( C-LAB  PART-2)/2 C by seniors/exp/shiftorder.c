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
	struct node *head=NULL,*temp=NULL, *t=NULL, *y=NULL, *x=NULL;
	int k=0,i=0,j=0, choice=0;
	printf("Enter the number of elements:");
	scanf("%d", &i);
	for(j=0;j<i;j++)
	{
		printf("Enter the element:");
		scanf("%d", &k);
		head=insertlast(head,k);
	}
	printf("If you want to start shifting from the last ENTER 1.\nIf you want to start shifting from first ENTER 2.\nEnter your choice:");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			t=head;
			while(t->next!=NULL)
			{
				y=t->next;
				temp=t;
				while(temp->next->next!=NULL)
					temp=temp->next;
				if(temp!=t)
				{
					x=temp->next;
					temp->next=NULL;
					t->next=x;
					x->next=y;
				}
				t=y;
			}
			break;
		case 2:
			while(head->next!=x)
			{
				if(head->next->next==x)
					break;
				t=head;
				head=head->next;
				temp=head;
				while(temp->next->next!=x)
					temp=temp->next;
				y=temp->next;
				temp->next=t;
				t->next=y;
				x=t;
			}
			break;
		default: printf("INVALID INPUT>>\n");
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
