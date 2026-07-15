#include <stdio.h>
int power(int n,int x);

int main()
{
  int x=0,n=0,ans=0;
 printf("Lets find x^n.\n");
 
 printf("Enter base(x): ");
 scanf("%d",&x);
 printf("Enter the power(n): ");
 scanf("%d",&n);
 
 ans=power(n,x);
 printf("%d\n",ans);
}

int power(int n,int x)
{
 int prod=1,i=0;
 while(n>i)
 {
  prod=prod*x  ;
  i=i+1;
 }
 return prod;
}


