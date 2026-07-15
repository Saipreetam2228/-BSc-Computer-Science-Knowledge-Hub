#include <stdio.h>
#include <stdlib.h>
struct tree
{
	char val;
	struct tree *left, *right;
};
struct build
{
	struct tree *ele;
	int freq;
	struct build *next;
};
struct code
{
	char sym, *c;
	struct code *next;
};
struct tree * createintree (char);
struct tree * createtree (struct tree *,struct tree *);
struct build * createinbuild (struct tree *,int);
struct build * insertinbuild (struct build *, struct tree *, int);
struct build * mininbuild (struct build **);
struct code * createincode(char,char*);
struct code * insertincode(struct code *, char, char *);
struct tree * findandcode (struct tree *, char, char *, int *);
int depthoftree (struct tree *);
char * searchincode(struct code *, char);
char * addstr(char *, char *);
void s2clink(struct code *, char *, int);
void printbuild (struct build *);
char * choice2(struct tree *, char *);
void printtree(struct tree *);
int main ()
{
	char input[101]="", decode[151]="", dummy;
	int i=0, *freq=NULL, depth=0, choice=0;
	struct build *x=NULL, *min1=NULL, *min2=NULL;
	struct tree *create=NULL, *out=NULL;
	struct code *code=NULL, *temp=NULL;
	char *finalcode=NULL, *output=NULL;
	int *index=NULL;
	index=(int*)malloc(sizeof(int));
	*index=0;
	freq=(int *)malloc(sizeof(int)*96);
	printf("\n-----------------------------------------------------\n----------Choose from the below options--------------\nEnter 1 to ENCODE a Message.\nEnter 2 to DECODE a Message.\n-----------------------------------------------------\n-----------------------------------------------------\n");
	scanf("%d", &choice);
	if(choice!=1 && choice!=2)
	{
		printf("Invalid Input!\n");
		return(0);
	}
	if(choice==1)
		printf("Enter the input(max 100 charecters):");
	else if(choice==2)
		printf("Enter the given frequency code(max 100 charecters):");
	scanf("%c", &dummy);
	scanf("%[^\n]s", input);
	while(input[i]!='\0')
		i=i+1;
	if(i>100)
	{
		printf("Input limit exceded!\n");
		return(0);
	}
	for(i=0;input[i]!='\0'; i++)
		freq[input[i]-32]++;
	for(i=0;i<96;i++)
	{
		if(freq[i]!=0)
		{
			x=insertinbuild(x,createintree(i+32),freq[i]);
			code=insertincode(code,i+32,NULL);
		}
	}
	if(choice==1)
		printbuild(x);
	while(x->next!=NULL)
	{
		min1=mininbuild(&x);
		min2=mininbuild(&x);
		create=createtree(min1->ele,min2->ele);
		x=insertinbuild(x,create,min1->freq+min2->freq);
		free(min1);
		free(min2);
	}
	free(x);
	free(freq);
	if(choice==1)
	{
		
		finalcode=(char *)malloc(sizeof(char)*depth+1);
		temp=code;
		while(temp!=NULL)
		{
			out=findandcode(create,temp->sym,finalcode,index);
			finalcode[*index]='\0';
			s2clink(temp,finalcode,*index);
			*index=0;
			temp=temp->next;
		}
		free(finalcode);
		for(i=0;input[i]!='\0';i++)
			output=addstr(output,searchincode(code,input[i]));
		printf("%s\n", output);
	}
	else if(choice==2)
	{
		printf("Enter a code to decode it(max 150 charecters):");
		scanf("%s", decode);
		i=0;
		while(decode[i]!='\0')
			i=i+1;
		if(i>150)
		{
			printf("Input limit exceded!\n");
			return(0);
		}
		finalcode=choice2(create,decode);
		printf("%s\n", finalcode);
	}
}
void printtree(struct tree *root)
{
	if(root==NULL)
		return;
	printtree(root->left);
	printf("%c", root->val);
	printtree(root->right);
}
struct tree * createintree (char x)
{
	struct tree *temp=NULL;
	temp=(struct tree *)malloc(sizeof(struct tree));
	temp->val=x;
	temp->right=NULL;
	temp->left=NULL;
	return(temp);
}
struct tree * createtree (struct tree *m1,struct tree *m2)
{
	struct tree *t=NULL;
	t=createintree(0);
	t->left=m1;
	t->right=m2;
	return(t);
}
struct build * createinbuild (struct tree *p,int f)
{
	struct build * temp=NULL;
	temp=(struct build *)malloc(sizeof(struct build));
	temp->ele=p;
	temp->freq=f;
	temp->next=NULL;
	return(temp);
}
struct build * insertinbuild (struct build *a, struct tree *p, int f)
{
	struct build *temp=NULL;
	temp=a;
	if(temp==NULL)
	{
		a=createinbuild(p,f);
		return(a);
	}
	struct build *t=createinbuild(p,f);
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=t;
	return(a);
}
struct build * mininbuild (struct build **x)
{
	struct build *temp=NULL, *y=NULL, *min=NULL;
	temp=*x;
	min=*x;
	while(temp->next!=NULL)
	{
		if(min->freq>=temp->next->freq)
		{
			min=temp->next;
			y=temp;
		}
		temp=temp->next;
	}
	if(y==NULL)
	{
		*x=(*x)->next;
		return(min);
	}
	y->next=y->next->next;
	min->next=NULL;
	return(min);
}
struct code * createincode(char s,char *c)
{
	struct code *temp=NULL;
	temp=(struct code *)malloc(sizeof(struct code));
	temp->sym=s;
	temp->c=c;
	temp->next=NULL;
	return(temp);
}
struct code * insertincode(struct code *h, char s, char *c)
{
	struct code *temp=h;
	if(h==NULL)
		return(createincode(s,c));
	while(h->next!=NULL)
		h=h->next;
	h->next=createincode(s,c);
	return(temp);
}
struct tree * findandcode (struct tree *root, char x, char *c, int *i)
{
	struct tree *temp=NULL;
	if(root==NULL)
		return(NULL);
	if(root->val==x)
		return(root);
	c[*i]='0';
	*i=(*i)+1;
	temp=findandcode(root->left,x,c,i);
	if(temp==NULL)
	{
		*i=(*i)-1;
		c[*i]='1';
		*i=(*i)+1;
		temp=findandcode(root->right,x,c,i);
	}
	if(temp==NULL)
		*i=(*i)-1;
	return(temp);
}
int depthoftree (struct tree *root)
{
	if(root==NULL)
		return(0);
	if(root->left==NULL && root->right==NULL)
		return(0);
	if(depthoftree(root->left)<depthoftree(root->right))
		return(1+depthoftree(root->right));
	return(1+depthoftree(root->left));
}
char * searchincode(struct code *h, char x)
{
	while(h!=NULL && h->sym!=x)
		h=h->next;
	return(h->c);
}
char * addstr(char *a, char *b)
{
	char *c=NULL;
	int i=0,j=0,k=0,l=0;
	while(a!=NULL && a[i]!='\0')
		i=i+1;
	while(b!=NULL && b[j]!='\0')
		j=j+1;
	c=(char *)malloc(sizeof(char)*(i+j+1));
	if(a==NULL)
	{
		for(k=0;k<=j;k++)
			c[k]=b[k];
		return(c);
	}
	for(k=0;k<=i+j;k++)
	{
		if(k<i)
			c[k]=a[k];
		if(k>=i)
		{
			c[k]=b[l];
			l=l+1;
		}
	}
	free(a);
	return(c);
}
void s2clink(struct code *h, char *x, int i)
{
	char *temp=(char *)malloc(sizeof(char)*i);
	int j=0;
	for(j=0;j<=i;j++)
		temp[j]=x[j];
	h->c=temp;
	return;
}
void printbuild(struct build *head)
{ 
	int count=0;
	struct build *temp=head;
	while(temp!=NULL)
	{
		printf("%c's frequency is %d\n",temp->ele->val,temp->freq );
		temp=temp->next;
	}
	printf("\nCopy this code for decode:");
	while(head!=NULL)
	{
		count=head->freq;
		while(count!=0)
		{
			printf("%c",head->ele->val);
			count--;
		}
		head=head->next;
	}
	printf("\n");
}
char * choice2(struct tree *root, char *x)
{
	char *temp=NULL;
	int i=0, j=0, k=0;
	struct tree *h=root;
	while(x[j]!='\0')
		j=j+1;
	temp=(char *)malloc(sizeof(char)*j);
	while(x[i]!='\0')
	{
		if(x[i]=='0')
		{
			if(h->left!=NULL)
				h=h->left;
			else
			{
				temp[k]=h->val;
				k=k+1;
				h=root;
				i=i-1;
			}
		}
		else if(x[i]=='1')
		{
			if(h->right!=NULL)
				h=h->right;
			else
			{
				temp[k]=h->val;
				k=k+1;
				h=root;
				i=i-1;
			}
		}
		i=i+1;
	}
	temp[k]=h->val;
	k=k+1;
	temp[k]='\0';
	return(temp);
}
