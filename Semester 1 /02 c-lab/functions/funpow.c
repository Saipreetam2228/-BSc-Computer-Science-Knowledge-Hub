#include <stdio.h>

int power(int x,int n)
{
  int pow=1,i=1;
  while(i<=n)
  {
    pow=pow*x;
    i=i+1;
  }
  return pow;
}

int main()
{
  int x,ans,n;
  printf("enter the exponent: ");
  scanf("%d",&x);
  printf("enter the power: ");
  scanf("%d",&n);
 
  ans=power(x,n);
  
 printf("ans is %d\n",ans);

}
