#include <stdio.h>
#include <stdlib.h>
struct node
{
	char c;
	struct node *next;
};
struct stack
{
	struct node *top;
};
char pop (struct stack *);
char first(struct stack *);
struct node * createnode(char);
void push (struct stack *, char);
int precedence (char);
int main()
{
	char m[100]="",n[100]="";
	char q;
	int i=0,k=0;
	int a=0,b=0;
	struct stack *x=NULL;
	x=(struct stack *)malloc(sizeof(struct stack));
	x->top=NULL;
	printf("Enter the Infix expression:");
	scanf("%[^\n]s", m);
	for(i=0;m[i]!='\0';i++)
	{
		if(m[i]>='0' && m[i]<='9' && m[i]!=' ')
		{
			n[k]=m[i];
			k=k+1;
		}
		else if(m[i-1]>='0' && m[i-1]<='9' && m[i]==' ')
		{
			n[k]=' ';
			k=k+1;
		}
		else if(m[i]!=' ')
		{
			q=first(x);
			if(q=='0')
			{
				//printf("pushing %c into stack because stack is empty\n", m[i]);
				push(x, m[i]);
				//printf("now %c is on the top of the stack\n", first(x));
				continue;
			}
			if(m[i]=='(')
			{
				//printf("pushing %c into stack\n", m[i]);
				push(x, m[i]);
				//printf("now %c is on the top of the stack\n", first(x));
				continue;
			}
			if(m[i]==')')
			{
				while(first(x)!='(')
				{
					q=pop(x);
					//printf("Placing %c on the outputsttring\n", q);
					n[k]=q;
					k=k+1;
					n[k]=' ';
					k=k+1;
				}
				q=pop(x);
				//printf("poped %c from the string\n", q);
				continue;
			}
			if(precedence(q)>precedence(m[i]))
			{
				//printf("pushing %c into stack because the top element of the stack %c has lower precidence than the given\n", m[i], q);
				push(x, m[i]);
				//printf("now %c is on the top of the stack\n", first(x));
			}
			else if(precedence(q)==precedence(m[i]))
			{
				while(precedence(first(x))>=precedence(m[i]))
				{
					q=pop(x);
					//printf("poping %c from stack because the given element %c has equal precidence\n", q, m[i]);
					n[k]=q;
					k=k+1;
					n[k]=' ';
					k=k+1;
					q=first(x);
				}
				push(x, m[i]);
				//printf("now %c is on the top of the stack\n", first(x));
			}
			else if(precedence(q)<precedence(m[i]))
			{
				while(precedence(first(x))>= precedence(m[i]))
				{
					q=pop(x);
					//printf("poping %c from stack because the given element %c has higher precidence\n", q, m[i]);
					n[k]=q;
					k=k+1;
					n[k]=' ';
					k=k+1;
				}
				push(x, m[i]);
				//printf("now %c is on the top of the stack\n", first(x));
			}
		}
	}
	while(first(x)!='0')
	{
		q=pop(x);
		n[k]=' ';
		k=k+1;
		n[k]=q;
		k=k+1;
	}
	n[k]='\0';
	printf("%s = %s\n",m,n);
}
char pop(struct stack *h)
{
	int k=0;
	struct node *t=NULL;
	if(h->top==NULL)
	{
		printf("Underflow Error!!\n");
		return(-1);
	}
	k=h->top->c;
	t=h->top;
	h->top=h->top->next;
	free(t);
	return(k);
}
char first(struct stack *h)
{
	if(h->top==NULL)
		return('0');
	return(h->top->c);
}
struct node * createnode(char x)
{
	struct node *h=NULL;
	h=(struct node *)malloc(sizeof(struct node));
	h->c=x;
	h->next=NULL;
	return(h);
}
void push(struct stack *h, char v)
{
	struct node *n=createnode(v);
	n->next=h->top;
	h->top=n;
	return;
}
int precedence (char sym)
{
	if(sym=='0')
		return(0);
	if(sym=='+')
		return(2);
	if(sym=='-')
		return(2);
	if(sym=='*')
		return(1);
	if(sym=='/')
		return(1);
}
