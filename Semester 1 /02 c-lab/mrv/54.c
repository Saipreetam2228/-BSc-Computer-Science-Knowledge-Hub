#include <stdio.h>
int factorial(int n)
{
 int i=1,prod=1;
 while(n>0)
 {
  prod=prod*n;
  n=n-1;
 }
 return prod;
}

int main()
{
 int n=0;
 printf("Enter a number to find its factorial: ");
 scanf("%d",&n);
 printf("%d! is %d\n",n,factorial(n));
}

//#include <stdio.h>
//int factorial(int n)
//{
 //int i=1,prod=1;
 //printf("Enter a number to find its factorial: ");
// scanf("%d",&n);
// while(n>0)
// {
 // prod=prod*n;
  //n=n-1;
 //}
 //return prod;
//}
////
//int main()
//{
 //int n=0;//

 //printf("%d\n",factorial(n));
//}
