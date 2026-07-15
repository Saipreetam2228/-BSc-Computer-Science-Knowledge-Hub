#include<stdio.h>
int main()
{
  int i,num,n;
  float den,x,sum;
  printf("enter the value for X:");
  scanf("%f",&x);
  printf("enter the value for n:");
  scanf("%d",&n);
  
  i=1;
  num=1;
  den=1;
  sum=0;
  
  while (i<=n)
  {
    sum=sum+(num/den);
    num=num*x*x*-1;
    den=den*(2*i-1)*(2*i);
    i=i+1;
  }
 printf("sum of the value is : %f\n",sum);
}
 
