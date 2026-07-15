#include <stdio.h>
#include <stdlib.h>
struct node
{
	int num;
	struct node * next;
};
struct node * createnode (int);
void insertlast (struct node *, int);
void printlist (struct node *);
struct node * insertfirst ( struct node *, int);
struct node * removenode (struct node *, int);
struct node * insertbefore(struct node *, int, int);
void insertafter (struct node *, int, int);
void clearlist (struct node *);
int length (struct node *);
int main()
{
	struct node *head=NULL;
	int k=0,i=0,j=0,c=0,c1=0,x=0,y=0;
	char n='y',n1='y';
	while(n=='y' || n=='Y')
	{
		printf("Enter the numer of elements in the list:");
		scanf("%d", &i);
		if(i!=0)
		{
			printf("Enter the first element of the list:");
			scanf("%d", &k);
			head=createnode(k);
		}
		else
		{
			printf("Enter a valid number!!\n");
			return(0);
		}
		for(j=1;j<i;j++)
		{
			printf("Enter the element:");
			scanf("%d", &k);
			insertlast(head,k);
		}
		n1='y';
		while(n1=='y' || n1=='Y')
		{
			printf("\n-----------------------------------------------------\n----------Choose from the below options--------------\nEnter 0 if NO CHANGES.\nEnter 1 for removing any existing entries.\nEnter 2 for adding entries.\nEnter 3 for adding enties in between the existing entries.\nEnter 4 to clear the list.\n-----------------------------------------------------\n-----------------------------------------------------\n");
			scanf("%d", &c);
			switch(c)
			{
				case 0: printf("The final linked list:\n"); 
					printlist(head);
					printf("The length of the linked list after all the changes is %d\n", length(head));
					clearlist(head);
					return(0);
				case 1: printf("Enter the element you want to remove:");
					scanf("%d", &x);
					head=removenode(head,x);
					printlist(head);
					break;
				case 2: printf("-----------------------------------------------------\n----------Choose from the below options--------------\nEnter 1 for Adding at the end of the list.\nEnter 2 for Adding at the begining of the list.\n-----------------------------------------------------\n-----------------------------------------------------\n");
					scanf("%d", &c1);
					printf("Enter the element:");
					scanf("%d", &x);
					switch(c1)
					{
						case 1:insertlast(head,x);
							break;
						case 2: head=insertfirst(head,x);
							break;
						default: printf("Invalid entry!!\n");
					}
					printlist(head);
					break;
					case 3: printf("-----------------------------------------------------\n----------Choose from the below options--------------\nEnter 1 for Adding before the element.\nEnter 2 for Adding after the element.\n-----------------------------------------------------\n-----------------------------------------------------\n");
					scanf("%d", &c1);
					printf("Enter the element you want to add:");
					scanf("%d", &x);
					printf("Enter the element before or after which you want to add %d:",x);
					scanf("%d", &y);
					switch(c1)
					{
						case 1:head=insertbefore(head,y,x);
							break;
						case 2:insertafter(head,y,x);
							break;
						default: printf("Invalid entry!!\n");
					}
					printlist(head);
					break;
				case 4: clearlist(head); 
					printf("The linked list created has been cleared\nDo you want to start over again? Y/N:\t");
					scanf("%s", &n);
					if(n=='n' || n=='N')
						return(0);
					break;
			 	default: printf("Invalid entry!!\n");
			}
			if(c!=4)
			{
				printf("Do you still want any changes? Y/N:\t");
				scanf("%s", &n1);
				if(n1=='n' || n1=='N')
					n=n1;
			}
			else
				n1='n';
		}
	}
	printf("\n\nThe final linked list is:\n");		
	printlist(head);
	printf("The length of the linked list after all the changes is %d\n", length(head));
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
void insertlast (struct node *h, int k)
{
	while(h->next!= NULL)
		h=h->next;
	h->next=createnode(k);
	return;
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
struct node * insertfirst ( struct node *h, int k)
{
	struct node *n=createnode(k);
	n->next=h;
	return(n);
}
struct node * removenode (struct node *h, int x)
{
	struct node *d=NULL,*t=NULL;
	if(h==NULL)
	{
		printf("The list is empty!!\n");
		return(h);
	}
	if(h->num==x)
	{
		d=h->next;
		free(h);
		return(d);
	}
	t=h;
	while(t->next!=NULL && t->next->num!=x)
		t=t->next;
	if(t->next==NULL)
	{
		printf("%d not found!!\n", x);
		return(h);
	}
	d=t->next->next;
	free(t->next);
	t->next=d;
	return(h);
}
struct node * insertbefore(struct node *h, int k, int x)
{
	struct node *d=NULL,*t=NULL;
	if(h==NULL)
	{
		printf("The given list is empty!\n");
		return(h);
	}
	if(h->num==k)
	{
		t=insertfirst(h,x);
		return(t);
	}
	t=createnode(x);
	d=h;
	while(d->next->num!=k && d->next->next!=NULL)
		d=d->next;
	if(d->next->num!=k && d->next->next==NULL)
	{
		printf("The given element %d is not found in the list!!\n", k);
		free(t);
		return(h);
	} 
	t->next=d->next;
	d->next=t;
	return(h);
}	
void insertafter (struct node *h, int k, int x)
{
	struct node *d=NULL, *t=NULL;
	if(h==NULL)
	{
		printf("The given list is empty!\n");
		return;
	}
	t=createnode(x);
	d=h;
	while(d->num!=k && d->next!=NULL)
		d=d->next;
	if(d->next==NULL && d->num!=k)
	{
		printf("The given element %d is not found in the list!!\n", k);
		free(t);
		return;
	}
	if(d->next==NULL)
	{
		d->next=t;
		return;
	}
	t->next=d->next;
	d->next=t;
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
int length (struct node * h)
{
	int l=0;
	while(h!=NULL)
	{
		l=l+1;
		h=h->next;
	}
	return(l);
}
