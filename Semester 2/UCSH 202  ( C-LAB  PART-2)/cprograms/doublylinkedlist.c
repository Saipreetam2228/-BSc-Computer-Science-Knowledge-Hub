#include<stdio.h>
#include<stdlib.h>   

struct node
{
    int data;
    struct node*next;
    struct node*prev;
};

struct node*head, *newnode;

void create()
{
    head=0;
    struct node*temp;
    int choice= 1;


while(choice)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d\n",newnode->data);
    
    newnode->prev=0;
    newnode->next=0;

   if(head==0)
   {
    head=temp=newnode;
   }
   else
   {
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
   }

   printf("do u wanna continue:(0/1)");
   scanf("%d\n",&choice);
}
}

void display()
{
    struct node*temp;
    temp=head;

    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void main()
{
    create();
    display();
}


