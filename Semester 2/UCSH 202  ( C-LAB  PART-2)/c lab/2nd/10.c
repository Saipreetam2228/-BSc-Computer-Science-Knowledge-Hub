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
 void insertfirst(struct Node*h, int v)
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
    createNode(23);
    insertfirst(head,-45);
    insertfirst(head,-36);
    insertfirst(head,29);
    printlist(head);    
 }
