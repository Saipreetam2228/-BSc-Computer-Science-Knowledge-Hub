#include<stdio.h>
int main()
{
  int x,n,pow=1,i=1;
  printf("enter value(x) and exponent(n): ");
  scanf("%d %d",&x,&n);
  
  while(i<=n)
  {
    pow=pow*x;
    i=i+1;
  }
  printf("the value is %d\n ",pow);
}
