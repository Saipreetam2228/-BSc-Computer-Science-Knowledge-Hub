#include <stdio.h>
#include <stdlib.h>
struct node
{
  int val;
  struct node *nxt;
};

//CREATING A NODE
struct node* createn(int v)
{
  struct node*n=NULL;
  n=(struct node*)malloc(sizeof(struct node));
  n->val=v;
  n->nxt=NULL;
  return(n);
}

//INSERT LAST  //the main thing is that we do not use the new address anywhere else so we do not return it.we do not return anything bcoz here we just create a new var at the last when the starting address is passed.
void inl(struct node*h,int v)  // H IS THE STARTING ADDRESS of the linked list, v is the integer that should be kept in the newly created variable.
{
  struct node*n=NULL,*t=NULL; //local variable created to hold the address of the newly created variable node.
  n=createn(v); //assigning the address to n.
  t=h; //local variable 't' to use to keep in the last variable of the linked list.
  while(t->nxt!=NULL) //we run a while loop to check whether that's the last variable of the linked list. being in the current variable we check 			
                     //whether the address of the current variable leads to a null or a proper variable.  if null stop and come out - it means it's  the last var in the linked list.
    t=t->nxt; //updating the var 't' to go to next var.
  t->nxt=n;  //we get the address of the last var in the linked list (t). using t we store the address of newly created var (using createn) in t's next.  
}//if we want to place/ insert a var at the last of 100 var linked list, it checks all the 100 var's addresses.

//INSERT FIRST idea: insert a new variable infront of the first variable in the linked list. the address of the already existing 1st variable should be the address in the nxt part(key holder) of the upcoming variable. (new 1st coach should have the key for the existing 1st coach of the train.) now the created var will be the 1st one. to use it again,we need to store the address of it right!. so we store the address. 
struct node* inf(struct node *h,int v)
{
  struct node*n=NULL; //local var.
  n=createn(v); //randomly allocated memory
  n->nxt=h;  // storing the address of the existing 1st var in the 2nd part of the newly created var. 
  return(n); //returning the address of the new 1st var.
}

void printl(struct node *h)
{
  while(h!=NULL)
  {
    printf("%d\n",h->val);
    h=h->nxt;
  }
}

struct node* find(struct node* head,int v) //finding the address of a value. we pass the 1st address of the linked list and the value for which we want to find the address.
{
  while(head!=NULL && head->val!=v) //we check whether the address is a proper one or not.2nd we check whether the value in the 1st node is equal to 
  				   //the value or not.
    head=head->nxt;                // if both the conditions are satisfied, then it goes to the next node.
  if(head!=NULL)                   // when the control comes out of the while loop, we dont know whether it's bcoz of which condition. //so we check 
  				//whether it's null i.e., if it's not null, then it means it found the value so it should return the address.
    return(head);            
  else                            // if it's null it means it went till the end of the train. so it returns null.
    return(NULL);
}

struct node* delete(struct node*h,int v)
{
  struct node *t=NULL,*k=NULL;
  if(h==NULL)
    printf("the given address is invalid.\n");
}
int main()
{
  struct node *a=NULL,*head=NULL;
  int v;
  printf("Enter a value:");
  scanf("%d",&v);
  head=createn(v);
  printf("%d\n",head);
  inl(head,54);
  head=inf(head,55);
  inl(head,56);
  head=inf(head,57);
  printl(head); 
  a=find(head,v);
  printf("%d",a);
}
