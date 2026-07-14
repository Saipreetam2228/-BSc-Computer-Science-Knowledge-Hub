//labtest
#include<stdio.h>
int main()
{
  int dx=2, i=0, n=100, last=0, primes[10]={} , x=5;
  printf("2\n3\n");
  primes[0]=3;
  while(x<=n)
  {
    i=0;
    while(primes[i]*primes[i]<=x)
    {
       if(x%primes[i]==0)
         break;
       i=i+1;
    }
    if(primes[i]*primes[i]>x)
    {
      printf("%d\n",x);
      if(x*x<=n && last<10)
      {
        last=last+1;
        primes[last]=x;
      }
    }
    x=x+dx;
    dx=6-dx;
  }
}
