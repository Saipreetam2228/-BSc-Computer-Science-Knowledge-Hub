#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    char c;
    struct node*next;
};

struct node*createnode(char c)
{
   struct node*n=malloc(sizeof(struct node));
   n->c=c;
   n->next=NULL;  
   return(n);     
}

struct node*insertfirst(struct node*h, char c)
{
  struct node*n=NULL;
  n=createnode(c);
  n->next=h;
  return(n);
}

int getvalue(struct node*h)
{
/* struct node*t=NULL;
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
*/


  int sum=0;

  while(h!=NULL)
  {
     sum=sum*2+(h->c-'0');
     h=h->next;
  }
  return(sum);
}


int main()
{   
    char bits[10]="";
    struct node*h=NULL;
    int i=0;

    printf("enter binary:(0/1)");
    scanf("%s",&bits);

    for(i= strlen(bits)-1;i>=0;i--)
       h=insertfirst(h,bits[i]);

    printf("the value of %s is %d\n",bits,getvalue(h));
}