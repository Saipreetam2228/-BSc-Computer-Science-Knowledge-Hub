#include <stdio.h>

int sum_rec(int n)
{
 if (n==0)
   return 0;
 if(n>0)
 {
  return n+sum_rec(n-1);
 }
}


int main()
{
  int n=0,ans;

  printf("Enter a number to sum upto it: ");
  scanf("%d",&n);
  
   if(n>0)
 {
  ans=sum_rec(n);
  printf("Sum upto %d is %d\n",n,ans);
 }
 else
 printf("Enter num.>0\n");
}


