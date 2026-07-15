 #include <stdio.h>
 #include <stdlib.h>
 struct Node
 {
   int val;
   struct Node *next;
 };
 void printlist(struct Node*h)
 {
    while(h!=NULL)
    {
      printf("%d\n",h->val);
      h=h->next;
    }
 }
 struct Node *createNode(int v)
 {
   struct Node *n=NULL;
   n=(struct Node*)malloc(sizeof(struct Node));
   n->val=v;
   n->next=NULL;
   return(n);
 }
 void insertlast(struct Node*h, int v)
 {
   struct Node*n=NULL, *t= NULL;
   n=createNode(40);
   t=h;
   while(t->next != NULL)
      t=t->next;
   t->next=n;
 }
 int main()
 {
    struct Node *head=NULL;
    head=createNode(23);
    insertlast(head,-49);
    insertlast(head,-39);
    insertlast(head,49);
    printlist(head);    
 }
 struct Node*Delete(struct Node *h, int x)
 {
   struct Node *t=NULL, *p=h;
   if(h==NULL)
   {
     printf("Deleting the list\n");
     return(NULL);
   }
   if(h->val==x)
   {
     t=h->next;
     free(h);
     return(t);
   }
   while(h->next != NULL && h-> next->val !=x)
   {
      h=h->next;
      if(h->next != NULL)
      {
        t=h->next->next;
        free(h->next);
        h->next=t;
      }
      else
         printf("%d not found\n",x);
      return(p);
   }
 }
