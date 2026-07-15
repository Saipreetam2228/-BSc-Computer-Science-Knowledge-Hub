#include<stdio.h>
#include<stdlib.h>

struct node
{
  int val;
  struct node *h;
};

struct node *find(struct node *h , int x)
{
 while(h != NULL)
 {
   if(h->val==x)
     return(h);
   h = h->next;  
 }
 return(NULL);
}

int main()
{
 struct node *head = NULL , *k = NULL;
 head=createnode(22);
 head=insertlast(25);
    insertfirst(26);
    insertfirst(2);
 head=insertlast(22);
 k = find(head , 25);
 if(k != NULL)
   printf("Found %d \n",k->val);
}
