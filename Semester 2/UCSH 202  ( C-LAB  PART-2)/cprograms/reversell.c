#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;

}

struct node* reverse(struct node*head)
{

    struct node*prevnode,*currentnode,*nextnode;
    prevnode=0;
    currentnode=nextnode=head;
    
    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    return(NULL)
}