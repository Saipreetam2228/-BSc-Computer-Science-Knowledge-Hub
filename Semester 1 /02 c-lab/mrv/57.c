#include <stdio.h>

int fac_rec(int n)
{
 if (n==0)
   return 1;
 if(n>0)
 {
  return n*fac_rec(n-1);
 }
}


int main()
{
  int n=0,ans;
  printf("Enter a number to find its factorial: ");
  scanf("%d",&n);
  ans=fac_rec(n);
  printf("%d! is %d\n",n,ans);
}


