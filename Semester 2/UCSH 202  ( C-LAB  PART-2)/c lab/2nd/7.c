//swap using pointers
#include <stdio.h>
#include <stdlib.h>
void swap(int*x,int*y)
{
  int t=0;
  t=*x;
  *x=*y;
  *y=t;
}
int main()
{
  int a=0, b=0;
  printf("Enter a:");
  scanf("%d",&a);
  printf("Enter b:");
  scanf("%d",&b);
  printf("!!Values after Swap!!\n");
  swap(&a,&b);
  printf("a=%d\nb=%d\n",a,b);
}

