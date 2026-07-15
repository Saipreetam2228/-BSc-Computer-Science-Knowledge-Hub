#include<stdio.h>
#include<stdlib.h>

void ap(float r , float *a , float *p)
{
  float pi = 3.1317 ;
  *a = pi * r * r ;
  *p = 2 * pi * r ;
}
int main()
{
  float r = 3.3 , a = 0.0 , p = 0.0 ;
  ap(r , &a , &p) ;
  printf("Area = %f , perimeater = %f\n	",a,p) ;
}
