//print primes 2 to n 2nd method without using mod
#include <stdio.h>
int main()
{
 int n=0,x=5,dx=2,plimsq=9,limit=1,primes[1000]={},multiples[1000]={},i=1,last=1;
 primes[1]=3;
 printf("Enter n to find all the primes till n: ");
 scanf("%d",&n);
 if (n<=0)
  printf("Enter a number greater than 0 \n");
 if (n==1)
   printf("2\n");
 else
  if( n>1)
  {
 printf("2\n3\n");
 while(x<=n)
 {
  if(x>=plimsq)
  {
   if(limit<=last)
    {
     multiples[limit]=plimsq;
     limit=limit+1;
    }
   if(limit<=last)
    plimsq=primes[limit]*primes[limit]; 
  }
  i=1;
  while(i<limit)
  {
   while(x>multiples[i])
    multiples[i]=multiples[i]*primes[i]*2;
   if(x==multiples[i])
    break;
   i=i+1;
  }
  if(i==limit)
   {
    printf("%d\n",x); 
    if(x*x<=n)
    {
     last=last+1;
     primes[last]=x;
    }
   }
  x=x+dx;
  dx=6-dx; 
 }
 
}
}
