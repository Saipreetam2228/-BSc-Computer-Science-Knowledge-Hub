#include <stdio.h>
#include <stdlib.h>
struct node
{
	int val;
	struct node *next;
};
struct stack
{
	struct node *top;
};
int pop (struct stack *);
struct node * createnode (int);
void push(struct stack *, int);
int main()
{
	char m[100]="";
	int i=0,j=0,k1=0,k2=0,k=0,num=0,mul=1,p=0;
	struct stack s={};
	printf("Enter the postfix expression:");
	scanf("%[^\n]s", m);
	while(m[j]!='\0')
		j++;
	for(i=0;i<j;i++)
	{
		while(m[i]>='0' && m[i]<='9' && m[i]!=' ')
		{
			i=i+1;
			continue;
		}
		if(m[i]==' ' && m[i-1]>='0' && m[i-1]<='9')
		{
			for(p=i-1;p>=0 && m[p]!=' ';p--)
			{	
				num=num+((m[p]-'0')*mul);
				mul=mul*10;
			}
			//printf("%d is the number being pushed\n", num);
			push(&s,num);
			mul=1;
			num=0;
		}
		else if(m[i]!=' ')
		{
			k1=pop(&s);
			k2=pop(&s);
			//printf("%d and %d are the top two in the stack\n", k1,k2);
			//printf("%c", m[i]);
			if(m[i]=='+')
				k=k2+k1;
			else if(m[i]=='-')
				k=k2-k1;
			else if(m[i]=='*')
				k=k2*k1;
			else if(m[i]=='/')
				k=k2/k1;
			//printf("%d is the number being pushed into the stack\n", k);
			push(&s,k);
		}
	}
	k=pop(&s);
	printf("%s = \"%d\"\n",m,k);
}
int pop(struct stack *h)
{
	int k=0;
	struct node	 *t=NULL;
	if(h->top==NULL)
	{
		printf("Underflow Error!!\n");
		return(-1);
	}
	k=h->top->val;
	t=h->top;
	h->top=h->top->next;
	free(t);
	return(k);
}
void push(struct stack *h, int v)
{
	struct node *n=createnode(v);
	n->next=h->top;
	h->top=n;
	return;
}
struct node * createnode (int k)
{
	struct node *p = NULL;
	p=(struct node *)malloc(sizeof(struct node));
	p->val=k;
	p->next=NULL;
	return(p);
}
