#include <stdio.h>

int power_rec(int n,int x)
{
 int ans=0;
 if (n==0)
   return 1;
 if(n>0)
 {
  return x*power_rec(n-1,x);
 }
 
}


int main()
{
  int x=0,n=0,ans=0;
 printf("Lets find x^n.\n");
 
 printf("Enter base(x): ");
 scanf("%d",&x);
 printf("Enter the power(n): ");
 scanf("%d",&n);
 
 ans=power_rec(n,x);
 printf("%d\n",ans);
}
