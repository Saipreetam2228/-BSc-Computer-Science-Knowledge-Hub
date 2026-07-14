#include<stdio.h>
int main()
{
  int sum=0,n,i=1;
  printf("enter the number: ");
  scanf("%d",&n);
  
  while(i<=n)
  {
    sum=sum+i;
printf("(%d) sum is %d; \n",i,sum);
    i=i+1;
  }
  printf("final sum is = %d\n",sum);
}
