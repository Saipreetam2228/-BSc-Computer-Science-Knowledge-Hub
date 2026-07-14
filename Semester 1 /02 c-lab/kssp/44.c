//x^n revised version
#include <stdio.h>
int main()
{
  int x=0, n=0, ans=0, e=0, prod=1;
  printf("Enter x:");
  scanf("%d",&x);
  printf("Enter exponent:");
  scanf("%d",&n);
  e=n;
  ans=x;
  while(n>0)
  {
    if (n%2==1)
      prod=prod*ans;
    ans=ans*ans;
    n=n/2;
  }
  printf("%d raised to the %d is %d",x,e,prod);
}
