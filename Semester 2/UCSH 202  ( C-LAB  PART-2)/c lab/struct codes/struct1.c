#include<stdio.h>
struct joke
{
 int re;
 int im;
};
int main()
{
 struct joke a={0,0},b={0,0};
 printf("Enter two values of a and b :");
 scanf(" %d %d %d %d",&a.re,&a.im ,&b.re,&b.im);
 printf("%d + %di",a.re,a.im);
 printf("%d + %di",b.re,b.im);
};  
