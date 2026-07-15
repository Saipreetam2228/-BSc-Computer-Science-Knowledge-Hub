#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
  char c;
  struct Node *next;
};

struct Node* CreateNode(char c)
{
  struct Node *n= malloc(sizeof(struct Node));
  n->c= c;
  n->next= NULL;
  return(n);
}

struct Node* InsertFirst(struct Node *h, char c)
{
  struct Node *n= CreateNode(c);
  n->next= h;
  return(n);
}

// MODIFY ONLY HERE
int GetValue(struct Node *h)
{
   struct node*t=NULL;
   int count=0,ans=0,x=0,sum;

   t=h;
   while(h!=NULL)
   {
    if(h->c=='1')
    {
        x=count-1;
        ans=1;
        while(x>0)
        {
            ans=ans*2;
            x=x-1;
        }
        if(x==0)         
        {
            ans=1;
        }
    }
    count=count-1;
    h=h->next;
    sum=sum+ans;
   }
   return(sum);
}



int main()
{
  char bits[10]= "";
  struct Node *h= NULL;
  int i= 0;

  printf("Enter the bit string: ");
  scanf("%s",bits);
  for(i= strlen(bits)-1; i >= 0; i--)
    h= InsertFirst(h,bits[i]);
 
  printf("The value of %s is %d\n",bits,GetValue(h));
}
