//print binary version of an integer
#include <stdio.h>
int main()
{
  int ans=0, base=2, divisor=1, m=0, n=0,d;
  printf("Enter no. to print its BINARY value:");
  scanf("%d",&n);
  m=n;
  while(divisor<=n)
  {
    divisor=divisor*base;
  }
  divisor=divisor/base;
  while(divisor>=1)
  {
    d=n/divisor;
    ans=ans*10+d;
    n=n%divisor;
    divisor=divisor/base;
  }
  printf("!!The BINARY value of %d is %d!!\n",ans,m);
}
