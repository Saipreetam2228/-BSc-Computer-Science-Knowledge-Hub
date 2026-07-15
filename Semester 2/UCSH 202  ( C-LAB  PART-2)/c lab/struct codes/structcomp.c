#include<stdio.h>
#include<stdlib.h>
struct comp
{
  float re , im;
};

int main()
{
 struct comp c ;
 c.re;
 c.im;
 struct comp *p ;
 p = &c ;
 c.re = 25 ;
 c.im = 35 ;
 p->re = 25 ;
 p->im = 35 ;
 printf("%f %f \n",p->re , p->im); 
}
