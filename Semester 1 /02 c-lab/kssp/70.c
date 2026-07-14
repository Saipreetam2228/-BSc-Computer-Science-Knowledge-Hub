//labtest program(multiplication of 2 numbers)
#include <stdio.h>
int main()
{
  int a= 0, b= 0, ans= 0;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  ans=0;
  while(a>0)
  { 
    if(a%2!=0)
    {
      ans=ans+b;
    }
    a=a/2;
    b=b*2;
  }
  printf("!!Product of the entered numbers = %d!!\n",ans);
}

