#include <stdio.h>
int main()
{
  int i=1,j=0,n=0,k=0,fact=1;
  float fib=1.0,num=1.0,j,sum=1.0;
  printf("Enter n:");
  scanf("%d",&n);
  while(i<=n)
  {
    fact=fact*i;
    sum=sum+num/fact;
  j=0;
  while(j<=i)
  {
    fib=fib+sum;
    j++;
  }
  }
  printf("e=%f",sum);
}

