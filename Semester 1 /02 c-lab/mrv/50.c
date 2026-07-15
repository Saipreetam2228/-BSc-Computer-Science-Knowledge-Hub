//print primes 2 to n 2nd method using mod
#include <stdio.h>
int main()
{
 int n=0,x=5,dx=2,plimsq=9,limit=1,primes[1000]={},i=1,last=1;
 primes[1]=3;
 printf("Enter n to find all the primes till n: ");
 scanf("%d",&n);
 printf("2\n3\n");
 
 while(x<n)
 {
  if(x>=plimsq)
  {
   if(limit<=last)
    limit=limit+1;
   if(limit<=last)
    plimsq=primes[i]*primes[i]; 
  }
  i=1;
  while(i<limit)
  {
   if(x%primes[i]==0)
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
