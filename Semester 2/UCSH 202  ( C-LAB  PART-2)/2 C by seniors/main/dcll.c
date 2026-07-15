#include <stdio.h>
#include <stdlib.h>
struct node 
{
	int num;
	struct node *prev,*next;
};
struct node * createnode (int);
void insertlast (struct node *, int);
void printlist (struct node *);
void clearlist (struct node *);
int length (struct node *);
struct node * insertfirst ( struct node *, int);
struct node * removenode (struct node *, int);
struct node * insertbefore(struct node *, int, int);
void insertafter (struct node *, int, int);
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
	struct node * p=NULL;
	p=(struct node *)malloc(sizeof(struct node));
	p->num=k;
	p->prev=p;
	p->next=p;
	return(p);
}
void insertlast (struct node *h, int k)
{
	struct node *a=NULL, *b=h->prev;
	a=createnode(k);
	b->next=a;
	a->next=h;
	a->prev=b;
	h->prev=a;
	return;	
}
void printlist (struct node *h)
{
	struct node *a=h;
	if(h==NULL)
	{
		printf("Empty list!!\n");
		return;
	}	

	while(h->next!=a)
	{
		printf("%d\n", h->num);
		h=h->next;
	}
	printf("%d\n",h->num);
	return;
}
void clearlist (struct node *h)
{
	struct node *a=h,*b=NULL;
	while(h->next!=a)
	{
		b=h;
		h=h->next;
		free(b);
	}
	free(h);
	return;
}
int length (struct node *h)
{
	struct node *a=h;
	int l=0;
	if(h==NULL)
	{
		printf("The given list is empty!!");
		return(l);
	}
	while(h->next!=a)
	{
		l=l+1;
		h=h->next;
	}
	return(l+1);
}
struct node * insertfirst ( struct node *h, int k)
{
	struct node *t=NULL,*t1=NULL;
	t=createnode(k);
	t1=h;
	while(t1->next!=h)
		t1=t1->next;
	t1->next=t;
	t->prev=t1;
	t->next=h;
	h->prev=t;
	return(t);
}
struct node * removenode (struct node *h, int k)
{
	struct node *t=NULL,*d=NULL;
	if(h==NULL)
	{
		printf("Empty list!!\n");
		return(h);
	}
	if(h->num==k)
	{
		if(h->next==h)
		{
			free(h);
			return(NULL);
		}
		t=h->next;
		d=t;
		while(d->next!=h)
			d=d->next;
		d->next=t;
		t->prev=d;
		free(h);
		return(t);
	}
	t=h;
	while(t->next!=h && t->next->num!=k)
		t=t->next;
	if(t->next==h && t->next->num!=k)
	{
		printf("%d not found!!\n", k);
		return(h);
	}
	if(t->next==h && t->next->num==k)
	{
		d=t->prev;
		free(t);
		h->prev=d;
	}
	d=t->next->next;
	free(t->next);
	t->next=d;
	return(h);
}
struct node * insertbefore(struct node *h, int k, int x)
{
	struct node * t=h,*t1=NULL,*t2=NULL;
	if(h->num==k)
	{
		t1=insertfirst(h,x);
		return(t1);
	}
	while(h->next!=t && h->next->num!=k)
		h=h->next;
	if(h->next==t && h->next->num!=k)
	{
		printf("%d not found!!\n", k);
		return(h);
	}
	t1=createnode(x);
	t2=h->next;
	h->next=t1;
	t1->next=t2;
	return(t);
}
void insertafter (struct node *h, int k, int x)
{
	struct node * t=h,*t1=NULL,*t2=NULL;
	if(h==NULL)
	{
		printf("Empty list!!\n");
		return;
	}
	while(h->next!=t && h->num!=k)
		h=h->next;
	if(h->next==t && h->num!=k)
	{
		printf("%d is not found", k);
		return;
	}
	if(h->next==t && h->num==k)
	{
		t1=createnode(x);
		h->next=t1;
		t1->next=t;
		t1->prev=h;
		t->prev=t1;
		return;
	}
	t2=createnode(x);
	t2->next=h->next;
	h->next=t2;
	t2->prev=h;
	return;
}
