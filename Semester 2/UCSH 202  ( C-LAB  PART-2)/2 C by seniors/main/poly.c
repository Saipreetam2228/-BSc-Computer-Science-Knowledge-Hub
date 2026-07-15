#include <stdio.h>
#include <stdlib.h>
struct term
{
	int cf,exp;
	struct term * next;
};
struct term * createterm(int,int);
struct term * insertterm(struct term *, int,int);
struct term * addpoly(struct term *, struct term *);
struct term * add(struct term *, struct term *);
struct term * sub(struct term *, struct term *);
struct term * mulpoly(struct term *, struct term *);
void printpoly(struct term *);
void clearlist (struct term *);
int main()
{
	int cf=0,exp=0,c=0;
	struct term * p1=NULL, *p2=NULL, *p=NULL;
	printf("\nENTER ZERO (0) FOR BOTH THE INPUTS TO STOP!!\n\n");
	while(1)
	{
		printf("Enter the co-efficient:\t");
		scanf("%d", &cf);
		printf("Enter the exponent:\t");
		scanf("%d", &exp);
		if(cf==0 && exp==0)
			break;
		p1=insertterm(p1,cf,exp);
	}
	printf("\nENTER ZERO (0) FOR BOTH THE INPUTS TO STOP!!\n\n");
	while(1)
	{
		printf("Enter the co-efficient:\t");
		scanf("%d", &cf);
		printf("Enter the exponent:\t");
		scanf("%d", &exp);
		if(cf==0 && exp==0)
			break;
		p2=insertterm(p2,cf,exp);
	}
	printf("\nFirst polynomial:\n");
	printpoly(p1);
	printf("\nSecond polynomial:\n");
	printpoly(p2);
	printf("\n");
	printf("\n-----------------------------------------------------\n----------Choose from the below options--------------\nEnter 1 to add the polynomials in normal way.\nEnter 2 to add the polynomials in special way.\nEnter 3 for subracting polynomials.\nEnter 4 for multiplying the polynomials.\n-----------------------------------------------------\n-----------------------------------------------------\n");
	scanf("%d", &c);
	switch(c)
	{
		case 1:p=addpoly(p1,p2);
		       printf("\nThe sum of the given two polynomials:\n");
		       break;
		case 2:p=add(p1,p2);
		       printf("\nThe sum of the given two polynomials using the special way:\n");
		       break;
		case 3:p=sub(p1,p2);
		       printf("\nThe difference of the given two polynomials:\n");
		       break;
		case 4:p=mulpoly(p1,p2);
		       printf("\nThe product of the given two polynomials:\n");
		       break;
		default: printf("Enter a valid input!!\n");
	}
	printpoly(p);
	printf("\n");
	clearlist(p);
}
struct term * createterm(int cf,int exp)
{
	struct term * h=NULL;
	h=(struct term *)malloc(sizeof(struct term));
	h->cf=cf;
	h->exp=exp;
	h->next=NULL;
	return(h);
}
struct term * insertterm(struct term *h, int cf,int exp)
{
	struct term *p=NULL,*t=NULL;
	if(h==NULL)
		return(createterm(cf,exp));
	if(cf==0)
		return(h);	
	if(exp>h->exp)
	{
		p=createterm(cf,exp);
		p->next=h;
		return(p);
	}
	if(exp==h->exp)
	{
		h->cf+=cf;
		return(h);
	}
	t=h;
	while(t->next!=NULL && t->next->exp>exp)
		t=t->next;
	if(t->next!=NULL && t->next->exp==exp)
	{
		t->next->cf+=cf;
		return(h);
	}
	p=createterm(cf,exp);
	p->next=t->next;
	t->next=p;
	return(h);
}
void printpoly(struct term *h)
{
	if(h==NULL)
	{
		printf("Empty polynomial!!\n");
		return;
	}
	if(h->exp>1)
	{
		if(h->cf!=1 && h->cf!=-1)
			printf("%dX^%d",h->cf,h->exp);
		else if(h->cf==1)
			printf("X^%d",h->exp);
		else if(h->cf==-1)
			printf("-X^%d",h->exp);
	}
	else if(h->exp==0)
		printf("%d", h->cf);
	else if(h->exp==1)
		printf("%dX", h->cf);
	h=h->next;
	while(h!=NULL)
	{
		if(h->exp==0)
		{
			if(h->cf<0)
				printf("%d",h->cf);
			else if(h->cf>0)
				printf("+%d",h->cf);
		}
		else if(h->cf<0)
		{
			if(h->cf!=-1)
			{
				if(h->exp!=1)
					printf("%dX^%d",h->cf,h->exp);
				else if(h->exp==1)
					printf("%dX",h->cf);
			}
			else if(h->cf==-1)
			{
				if(h->exp!=1)
					printf("-X^%d", h->exp);
				else if(h->exp==1)
					printf("-X");
			}
		}
		else if(h->cf>0)
		{
			if(h->cf!=1)
			{
				if(h->exp!=1)
					printf("+%dX^%d",h->cf,h->exp);
				else if(h->exp==1)
					printf("+%dX",h->cf);
			}
			else if(h->cf==1)
			{
				if(h->exp!=1)
					printf("+X^%d",h->exp);
				else if(h->exp==1)
					printf("+X");
			}
		}
		h=h->next;
	}
	return;
}
struct term * addpoly(struct term *p1, struct term *p2)
{
	struct term * p=NULL;
	while(p1!=NULL && p2!=NULL)
	{
		if(p1->exp>p2->exp)
		{
			p=insertterm(p,p1->cf,p1->exp);
			p1=p1->next;
		}
		else if(p1->exp<p2->exp)
		{
			p=insertterm(p,p2->cf,p2->exp);
			p2=p2->next;
		}
		else if(p1->exp==p2->exp)
		{
			p=insertterm(p,p1->cf+p2->cf,p1->exp);
			p1=p1->next;
			p2=p2->next;
		}
	}
	while(p1!=NULL)
	{
		p=insertterm(p,p->cf,p->exp);
		p1=p1->next;
	}
	while(p2!=NULL)
	{
		p=insertterm(p,p2->cf,p2->exp);
		p2=p2->next;
	}
	return(p);
}
struct term * add(struct term *p1, struct term *p2)
{
	struct term *p3=NULL;
	while(p1!=NULL)
	{
		p3=insertterm(p3,p1->cf,p1->exp);
		p1=p1->next;
	}
	while(p2!=NULL)
	{
		p3=insertterm(p3,p2->cf,p2->exp);
		p2=p2->next;
	}
	return(p3);
}
struct term * sub(struct term *p1, struct term *p2)
{
	struct term *p3=NULL;
	while(p1!=NULL)
	{
		p3=insertterm(p3,p1->cf,p1->exp);
		p1=p1->next;
	}
	while(p2!=NULL)
	{
		p3=insertterm(p3,-p2->cf,p2->exp);
		p2=p2->next;
	}
	return(p3);
}
struct term * mulpoly(struct term *h1, struct term *h2)
{
	struct term * p=NULL,*t=h2;
	while(h1!=NULL)
	{
		h2=t;
		while(h2!=NULL)
		{
			p=insertterm(p,h1->cf*h2->cf,h1->exp+h2->exp);
			h2=h2->next;
		}
		h1=h1->next;
	}
	return(p);
}
void clearlist (struct term *h)
{
	struct term * i=NULL;
	if(h==NULL)
	{
		printf("The given polynomial is empty!\n");
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
