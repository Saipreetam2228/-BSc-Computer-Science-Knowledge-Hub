// area funtion
#include<stdio.h>
int main()
{
  float r=0,area=0,cir=0,pi=3.14;
  printf("enter the radius(r) value: ");
  scanf("%f",&r);
  area=pi*r*r;
  cir=2*pi*r;
  printf("\nThe area of the circle is= %f\n",area);
  printf("The circumference of the circle is= %f\n",cir);
  
  
}
