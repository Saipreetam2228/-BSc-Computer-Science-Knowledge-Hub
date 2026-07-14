//sum up to n:
#include <stdio.h>
int main()
{
  int i=1,n=0,sum=0,k=0;
  printf("Enter n:");
  scanf("%d",&n);
  while(i<=n)
  {
    sum=sum+i;
    i=i+1;
    //printf("SUM IS %d\n i is %d\n ",sum,i);
  } 
    printf("sum is %d\n",sum);
    
}
