#include"struct.h"

int minimum(struct node*h)
{
   int min=0,x=0;
   min=h->val;
   while(h->next!=NULL)
   { x=h->next->val;
     if(min < x)
   
       min=h->val;
     h=h->next;
   }
   
   return(min);
}


int main()
{
    struct node *head=NULL;
    int k=0;
    head=createnode(34);
    insertlast(head,38);
    head=insertfirst(head,15);
    insertlast(head,8);
    //printlist(head);
    k=minimum(head);
    printf("min k %d\n",k);
}