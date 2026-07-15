#include <stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node*next;
};

struct node* createnode(int v)
{
    struct node*n=NULL;
    n=(struct node*)malloc(sizeof(struct node));
    n->val=v;
    n->next=NULL;
    return(n);
}

struct node*push(struct node*s,int v)
{
    struct node*n=NULL;
    n=createnode(v);
    n->next=s;
    return(n);
}

struct node* pop(struct node**s)
{
  struct node*t=NULL;
  int x=0;

  if(*s==NULL)
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

int main()
{
    struct node*st=NULL;
    int x=0,k=0,choice=1;
   
    while(choice)
    {
      printf("enter no:");
      scanf("%d\n",&x);

      st=push(st,k);

      printf("wanna con(0/1):");
      scanf("%d\n",&choice);
    } 

    while(st!=0)
    {
        x=pop(&st);
        printf("%d\n",x);
    }
}