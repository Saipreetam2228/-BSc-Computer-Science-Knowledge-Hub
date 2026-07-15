//area & perimeter
#include <stdio.h>
#include <stdlib.h>
void ap(float r,float *a, float*p)
{
  float pi=3.1417;
  *a=pi*r*r;
  *p=2*pi*r;
}
int main()
{
  float r=0.0, a=0.0, p=0.0;
  printf("Enter radius of the circle:");
  scanf("%f",&r);
  ap(r,&a,&p);
  printf("Area= %f\nPermiter= %f\n",a,p);
}

