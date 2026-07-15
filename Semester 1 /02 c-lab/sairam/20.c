// area funtion
#include<stdio.h>
int main()
{
  int n=0,a=0,sum;
  printf("\nenter a number :  ");
  scanf("%d",&n);
  printf("the reverse of the number is:");
  
  while(n>=10)
  {
    a=n%10;
    printf("%d",a);
    n=n/10;
    sum=sum+a;
  }
    sum=sum+n;
  if(a<=9)  
  {
    printf("%d\n",n);
  }
  printf("the sum is =%d\n",sum);
}
