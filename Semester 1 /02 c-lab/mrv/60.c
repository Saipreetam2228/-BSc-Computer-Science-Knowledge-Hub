//fibonacci
#include <stdio.h>

int fib_rec(int n);
int main()
{ int n=0,i=2,ans=0;
 printf("Enter n to find the nth fibonacci number: ");
 scanf("%d",&n);
 ans=fib_rec(n);
 printf("%dth fibonacci number is %d.\n",n,ans);
}

int fib_rec(int n)
{ 
 if (n==1) 
   return 0;
 if (n==2)
   return 1;
else
 if (n>2)
  return (fib_rec(n-1)+fib_rec(n-2));
}
