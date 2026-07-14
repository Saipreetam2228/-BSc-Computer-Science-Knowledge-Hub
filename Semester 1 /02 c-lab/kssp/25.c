#include <stdio.h>
int main()
{
  int n=0, k=0, d=0,sum=0;
  printf("Enter a number:");
  scanf("%d",&n);
  k=n;
  while(k>0)
  {
    d=k%10;
    sum=sum+d;
    k=k/10;
  }
  printf("Sum of the digits of %d is %d",n,sum);
}
