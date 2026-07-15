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
   n=createNode(35);
   t=h;
   while(t->next != NULL)
      t=t->next;
   t->next=n;
 }
 int main()
 {
    struct Node *head=NULL;
    head=createNode(23);
    insertlast(head,-45);
    insertlast(head,-36);
    insertlast(head,29);
    printlist(head);    
 }

