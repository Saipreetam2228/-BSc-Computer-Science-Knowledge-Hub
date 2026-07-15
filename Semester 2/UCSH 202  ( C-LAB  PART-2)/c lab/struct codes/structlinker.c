#include<stdio.h>
#include<stdlib.h>
struct node
{
 int val ;
 struct node *next ;
};	

struct node *createnode(int v)
{
 struct node *n = NULL ;
 n = (struct node*) malloc(sizeof(struct node)) ;
 n->val = v ;
 n->next = NULL ;
 return(n) ;
}

void insertlast(struct node *h , int v)
{
 struct node *n  = NULL , *t = NULL ;
 n = createnode(v) ; 
 t=h ;
 while(t->next != NULL)
   t = t->next ;
 t->next = n ;
}

struct node *insertfirst(struct node *h , int v)
{
 struct node *n = NULL ;
 n= createnode(v);
 n->next = h ;
 return(n) ;
}

void printlist(struct node *h)
{
 while(h != NULL)
 {
  printf("%d\n",h->val);
  h=h->next ;
 }
}

int main()
{
 struct node *head = NULL ;
 head= createnode(33);
 head = insertfirst(head , -45);
 head = insertfirst(head , -36);
 head = insertfirst(head , 26);
 printlist(head);
}
