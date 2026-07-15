#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int val;
    struct node *next;
};

struct node* createnode(int v)
{
  struct node*n=NULL;
  n=(struct node*)malloc(sizeof(struct node));
  n->val=v;
  n->next=NULL;
  return(n);
}
//s= stack
//push is nothing but inserting a value into container 
struct node*push(struct node*s,int v)
{
    struct node*n=NULL;
    n=createnode(v);
    n->next=s;
    return(n);
}

int pop(struct node**s)
{
    struct node*t=NULL;
    int x=0;
    if(s==NULL)
    {
        printf("stack underflow\n");
        return(0);
    }
    x=(*s)->val;
    t=*s;
    *s=(*s)->next;
    free(t);
    return(x);   
}
bool isempty(struct node*s);
int top(struct node*s)
{
    if(!isempty(s))
      return(s->val);
    return(0);
}

bool isempty(struct node*s)
{
    if(s==NULL)
      return(true);
    return(false);
}

bool isfull(struct node*s)
{
    struct node*n=NULL;
    n=createnode(0);

    if(n=NULL)
      return(true);
    free(n);
    return(false);
}


int main()
{
    struct node*st=NULL;
    int k=0,choice=1;
   // st=push(st,3);
    //st=push(st,4);
    //st=push(st,5);

    while(choice!=0)    //what's the problem
     {
        printf("enter the no:");
        scanf("%d",&k);  //don't keep any chracter or valur beside %d in scanf
        st=push(st,k);

        printf("wanna try more(0/1):");
        scanf("%d",&choice);
     }

    k=top(st);
    printf("top is%d\n",k);
   

    k=isfull(st);
    while(st!=NULL)
    {
        k=pop(&st);
        printf("%d\n",k);
    }
      
    
}