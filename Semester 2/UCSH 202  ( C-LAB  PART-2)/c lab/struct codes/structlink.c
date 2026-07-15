#include<stdio.h>
#include<stdlib.h>
struct node
{
 int val ;
 struct node *n ,*temp;
};

int main()
{
  struct node *k = NULL , *temp;
  k = (struct node*) malloc(sizeof(struct node));
  k->val=25 ;
  k->n = (struct node*) malloc(sizeof(struct node));
  k->n->val= 35 ;
  k->n->n = (struct node*) malloc(sizeof(struct node));
  k->n->n->	val = 45 ;
  k->n->n->n =NULL ;
  temp = k ;
  while(temp != NULL)
  {
    printf("%d \n",temp -> val);
    temp = temp -> n ;
  }
}
