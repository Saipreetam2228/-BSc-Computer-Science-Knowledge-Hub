#include <stdio.h>
int fun(int n);


int main()
{
 int n=0,x=0;
 x=fun(n);
 printf("you can give your number to others as %d+143",x);
}


int fun(int n)
{
 int d=0;
 printf("Enter your phone number: ");
 scanf("%d",&n);
 d=n-143;
 return d,
}
