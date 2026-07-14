//fibonnaci numbers using recursion
#include <stdio.h>
int fib(int, int);
int main()
{
  int n=0,k=0,m=0;
  printf("Enter N to find that FIBANOCCI NUMBER:");
  scanf("%d",&n);
  m=n-3;
  k=fib(m,n);
  printf("!!The nth FIBANOCCI NUMBER is %d!!",k);
}
int fib(int m,int n)
{
  if(n==0)
    return(0);
  if(n==1)
    return(1);
  if(n==2)
    return(1);
  else
    return(m+fib(m-1,n));
}
