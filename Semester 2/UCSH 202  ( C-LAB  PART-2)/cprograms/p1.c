#include<stdio.h>
int main()
{
   printf("sairam");   
}


void main()
{
   int a=10,b=9;
   int *p,*q;
   p=&a;
   q=&b;
   printf('value of a %d\n',a);
   printf('value of a %d\n',*p);
   printf('value of a %d\n',*&a);
   printf('value of a %d\n',p);
}