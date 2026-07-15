#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node*newnode(int data)
{
    struct node*node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->next=NULL;
    return(node);
}

void insertend(struct node**head,int data)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;

    if(*head==NULL)
    {
        *head=newnode;
        return;
    }

    struct node*temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    
}

int findminimum(struct node*head)
{
    if(head==NULL)
    {
        printf("emptylist.\n");
        return-1;
    }
    
    int min=head->data;
    struct node*current=head->next;

    while(current!=NULL)
    {
        if(current->data < min)
           min=current->data;
        current=current->next;
    }
    return min;
}

 void printlist(struct node*head)
 {
    struct node*temp=head;
    while(temp!=NULL)
    {
      printf("%d ->",temp->data);
      temp=temp->next;
    }
    printf("NULL\n");
 }

 int main()
 {
   struct node*head=NULL;

   insertend(&head,10);
   insertend(&head,5);
   insertend(&head,1);
   insertend(&head,-34);
   insertend(&head,-34);
   insertend(&head,46);

   printf("linked list:");
   printlist(head);

   int min=findminimum(head);
   if(min !=-1)
     printf("minimum value in the linked list:%d\n",min);
    
   return(0);
 }



