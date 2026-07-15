#include <stdio.h>
int main()
{
  
  int k[100]={},i=0,sum=0,n=0;
   printf("enter number:");
   scanf("%d",&n);
  for (i=0;i<n;i=i+1)
  {
   k[i]=i+1;
   sum=sum+k[i];
   printf("%d. %d\n",k[i],sum);
  }
  printf("\nfinal sum (%d)is %d\n",n,sum);
}
