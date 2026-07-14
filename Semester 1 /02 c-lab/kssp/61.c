//power x^n using recursion
#include <stdio.h>
int power(int,int);
int main()
{
  int n=0,x=0,k=0;
  printf("Enter Number:");
  scanf("%d",&x);
  printf("Enter Exponent:");
  scanf("%d",&n);
  k=power(x,n);
  printf("!!The %d raised to the %d is %d!!",x,n,k);
}
int power(int x, int n)
{
  if(n==0)
    return(1);
  if(n>0)
    return(x*(power(x,n-1)));
}
