//factorial using recursion
#include <stdio.h>
int fact(int);
int main()
{
  int n=0,k=0;
  printf("Enter no. to find its factorial:");
  scanf("%d",&n);
  k=fact(n);
  printf("!!The FACTORIAL of entered no. is!!\n%d != %d\n",n,k);
}
int fact(int n)
{
  if(n==0)
    return(1);
  else
    return(n*fact(n-1)); 
}
