#include <stdio.h>
#include <stdlib.h>
struct node
{
	char val;
	struct node *next;
};
struct stack
{
	struct node *top;
};
char pop (struct stack *);
struct node * createnode (char);
void push(struct stack *, char);
int main()
{
	struct stack *s=(struct stack *)malloc(sizeof(struct stack));
	char input[51]="", temp;
	int i=0;
	printf("Enter a charecter string of brackets (max 50):");
	scanf("%s", input);
	while(input[i]!='\0')
	{
		if(input[i]=='[' || input[i]=='{' || input[i]=='(')
			push(s,input[i]);
		else if(input[i]==']' || input[i]=='}' || input[i]==')')
		{
			temp=pop(s);
			if(temp!=input[i]-2 && temp!=input[i]-1)
			{
				printf("Entered a imbalanced string of brackets.\n");
				return(0);
			}
		}
		i=i+1;
	}
	if(pop(s)!='0')
		printf("Entered a imbalanced string of brackets.\n");
	else
		printf("Entered a balanced string of brackets.\n");
}
struct node * createnode (char x)
{
	struct node *temp=NULL;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->val=x;
	temp->next=NULL;
	return(temp);
}
char pop(struct stack *h)
{
	char k=0;
	struct node *t=NULL;
	if(h->top==NULL)
		return('0');
	k=h->top->val;
	t=h->top;
	h->top=h->top->next;
	free(t);
	return(k);
}
void push(struct stack *h, char v)
{
	struct node *n=createnode(v);
	n->next=h->top;
	h->top=n;
	return;
}