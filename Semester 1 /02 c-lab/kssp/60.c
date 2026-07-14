//sum upto n using recursion
#include <stdio.h>
int sum(int);
int main()
{
  int n=0,k=0;
  printf("Enter no. to find SUM upto N:");
  scanf("%d",&n);
  k=sum(n);
  printf("!!The SUM upto entered no. is: %d!!\n",k);
}
int sum(int n)
{
  if(n==0)
    return(0);
  else
    return(n+sum(n-1)); 
}
