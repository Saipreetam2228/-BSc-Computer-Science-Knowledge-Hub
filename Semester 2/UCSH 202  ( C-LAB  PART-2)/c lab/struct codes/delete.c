#include<stdio.h>
#include<stdlib.h>
struct node
{
  int val ;
  struct node *next ;
};

struct node *del(struct node *h , int x)
{
 struct node *t = NULL , *p = h;
 if(h == NULL)
 {
   printf("%d not found cannot delete\n",x);
   return(NULL);
 }
 if(h->val == x)
 {
   t = h->val;
   free(h);
   return(t);
 }
 while(h->next != NULL && )
}
