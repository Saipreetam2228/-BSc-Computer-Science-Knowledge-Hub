//cycle of three elements using pointers
#include <stdio.h>
#include <stdio.h>
void cycle(int* x, int* y, int* z)
{
  int t=0;
  t=*x;
  *x=*y;
  *y=*z;
  *z=t;
}
int main()
{
  int a=0, b=0, c=0;
  printf("Enter a:");
  scanf("%d",&a);
  printf("Enter b:");
  scanf("%d",&b);
  printf("Enter c:");
  scanf("%d",&c);
  printf("!!Cycle Of values!!\n");
  cycle(&a,&b,&c);
  printf("a=%d\nb=%d\nc=%d\n",a,b,c);
}
