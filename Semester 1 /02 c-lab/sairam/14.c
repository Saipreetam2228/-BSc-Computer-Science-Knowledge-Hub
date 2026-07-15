#include <stdio.h>
int main()
{
  int i=0,n=0,k=0,sum=0;
  printf("how many number u need (n): ");
  scanf("%d",&n);
  while(i<n)
  {
    printf("%d.",i+1);
    scanf("%d",&k);
    sum=sum+k;
    i=i+1;
  }
  printf("sum is %d\n",sum);
}
