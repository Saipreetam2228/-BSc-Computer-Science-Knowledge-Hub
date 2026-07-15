// squares up to n:
#include <stdio.h>
int main()
{
  int k[100]={},i=1,sum=0,n=0;
  
   printf("enter number:");
   scanf("%d",&n);
   printf("squares up to %d are:- \n",n);
  for (i=1;i<=n;i=i+1)
  {
   k[i]=i*i;
   printf("%d\n",k[i]);
    
  }
}
