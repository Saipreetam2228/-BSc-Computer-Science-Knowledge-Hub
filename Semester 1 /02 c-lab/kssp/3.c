//Cycle of 3 variables
#include <stdio.h>
int main()
{
  int a= 0, b= 0, c= 0, d= 0;
  printf("Enter the values of a,b,c:");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  d=a;
  a=b;
  b=c;
  c=d;
  printf("a is %d\n b is %d\n c is %d\n",a,b,c);
}
