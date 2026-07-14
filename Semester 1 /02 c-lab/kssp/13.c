#include <stdio.h>
int main()
{
  int i=0,n=0,sum=0,k=0,avg=0;
  printf("Enter the no. of numbers:");
  scanf("%d",&n);
  while(i<n)
  {
    printf("%d.",i+1);
    scanf("%d",&k);
    i=i+1;
    sum=sum+k;
  }
    avg=sum/n;   
    printf("Average of n no.s is %d",avg);
    
}

