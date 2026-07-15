//TEST CASE1: 111 + 222
//TEST CASE2: 1112 + 30
//TEST CASE3: 9876 + 9999
//TEST CASE4:  9 + 999

#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int val;
  struct Node *next;
};

struct Node* CreateNode(int v)
{
  struct Node *n= malloc(sizeof(struct Node));
  n->val= v;
  n->next= NULL;
}

struct Node* InsertLast(struct Node *h, int v)
{
  struct Node *n= CreateNode(v), *t= NULL;
  if(h == NULL)
    return(n);
  t= h;
  while(t->next != NULL)
    t= t->next;
  t->next= n;
  return(h);
}

void PrintNum(struct Node *h)
{
  if(h == NULL)
    return;
  PrintNum(h->next);
  printf("%d",h->val);
}

struct Node* add(struct Node *h1, struct Node *h2)
{
	struct Node *h=NULL;
	int carry=0,x=0;
	while(h1!=NULL)
	{
		if(h2==NULL)
			break;
		x=h1->val+h2->val+carry;
		carry=x/10;
		if(carry!=0)
			x=x%10;
		h=InsertLast(h,x);
		h2=h2->next;
		h1=h1->next;
	}
	while(h1!=NULL)
	{
		x=h1->val+carry;
		carry=x/10;
		if(carry!=0)
			x=x%10;
		h=InsertLast(h,x);
		h1=h1->next;
	}
	while(h2!=NULL)
	{
		x=h2->val+carry;
		carry=x/10;
		if(carry!=0)
			x=x%10;
		h=InsertLast(h,x);
		h2=h2->next;
	}
	
	if(carry!=0)
		h=InsertLast(h,carry);
	return(h);
}

struct Node* ClearList(struct Node *h)
{
  struct Node *t= h;
  while(t != NULL)
  {
    h= t->next;
    free(t);
    t= h;
  }
  return(NULL);
}

int main()
{
  struct Node *num1= NULL, *num2= NULL, *num3= NULL;
  int n1= 0, n2= 0, i= 0;

  printf("Enter the first number: ");
  scanf("%d",&n1);
  printf("Enter the second number: ");
  scanf("%d",&n2);

  while(n1 > 0)
  {
    num1= InsertLast(num1,n1%10);
    n1/= 10;
  }
  while(n2 > 0)
  {
    num2= InsertLast(num2,n2%10);
    n2/= 10;
  }

  printf("Your first number is: ");
  PrintNum(num1);
  printf("\nYour second number is: ");
  PrintNum(num2);

  num3= add(num1,num2);
  printf("\nSum of the two numbers= ");
  PrintNum(num3);
  printf("\n");

  num1= ClearList(num1);
  num2= ClearList(num2);
  num3= ClearList(num3);
}
