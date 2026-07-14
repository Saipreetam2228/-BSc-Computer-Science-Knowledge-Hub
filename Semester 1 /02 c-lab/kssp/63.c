//sum upto n using function
#include <stdio.h>
int sum(int);
int main()
{
  int n=0, k=0;
  printf("Enter no. to find SUM upto N:");
  scanf("%d",&n);
  k=sum(n);
  printf("!!The SUM upto entered no. is: %d!!\n",k);
}
int sum(int n)
{
  int i=0,s=0;
  while(i<=n)
  {
     s=s+i;
     i++;
  }
  return(s);
}
