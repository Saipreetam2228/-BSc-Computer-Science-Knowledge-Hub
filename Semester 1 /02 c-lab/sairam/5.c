//power with exponents
#include <stdio.h>
int main()
{
  int x=0,i=1,n=0,pow=1;
  
  {
    printf("enter x and n:");
    scanf("%d %d",&x,&n);
   
    
    while (i<=n)
  {
    pow=pow*x;
    i=i+1;
   // printf("%d\n",pow); to see step by step:
  }
   printf("%d power %d is %d\n",x,n,pow);
  }
}
