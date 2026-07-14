//base conversion
#include <stdio.h>
int main()
{
  int ans=0, base=0, divisor=1, m=0, n=0,d;
  printf("Enter the value of base:");
  scanf("%d",&base);
  printf("Enter the value to change its base:");
  scanf("%d",&m);
  n=m;
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
  printf("The number %d in base %d is %d\n",m,base,ans); 
}

