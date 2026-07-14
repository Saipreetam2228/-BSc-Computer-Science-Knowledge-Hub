//HCF_GCD
#include <stdio.h>
int main()
{
  int x=0, y=0, z=0, k=0;
  printf("Enter x and y to check GCD:");
  scanf("%d",&x);
  scanf("%d",&y);
  if (y>x)
  {
    k=x;
    x=y;
    y=k;
  }
  while(x%y !=0)
  {
    z=x%y;
    x=y;
    y=z;
  }
  printf("!!The GCD among x and y is %d!!",y);
}
