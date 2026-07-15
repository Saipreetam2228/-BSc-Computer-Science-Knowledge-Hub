#include <stdio.h>
int sum_to_n(int n);

int main()
{
 sum_to_n(0);
}

int sum_to_n(int n)
{
 int sum=0,i=1;
 printf("Enter a number to find sum upto it: ");
 scanf("%d",&n);
 while(n>=i)
 {
  sum=sum+i;  
  i=i+1;
 }
 printf("sum upto %d is %d.\n",n,sum);
}


