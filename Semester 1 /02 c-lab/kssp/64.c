//power x^n using function
#include <stdio.h>
int power(int,int);
int main()
{
  int n=0, x=0, k=0;
  printf("Enter number:");
  scanf("%d",&x);
  printf("Enter exponent:");
  scanf("%d",&n);
  k=power(x,n);
  printf("!!The %d raised to the %d is %d!!\n",x,n,k);
}
int power(int x, int n)
{
  int i=0, ans=1;
  while(i<n)
  {
    ans=ans*x;
    i=i+1;
  }
  return(x,ans);
}
