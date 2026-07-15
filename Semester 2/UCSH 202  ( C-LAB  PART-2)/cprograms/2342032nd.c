#include <stdio.h>

int sum_of_leaves(int numNodes, int startVal)
{

  int h=0 , ans=startVal, t=0;
  while(h<numNodes)  //to go till last element
  {
   if(2*h+1>=numNodes)
    t=t+ans;   // addition
   ans=ans+1;
   h=h+1;  // incrementation 
  }
  return (t);
}

int main(int argc, char **argv)
{
  int n= 0, s= 0;

  //Assume proper n value; n > 0
  printf("Enter the total number of nodes: ");
  scanf("%d",&n);

  //s can have any integer value
  printf("Enter the starting value: ");
  scanf("%d",&s);

  printf("Sum of the leaves= %d\n",sum_of_leaves(n,s));
}
