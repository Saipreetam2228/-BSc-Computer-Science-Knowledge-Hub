//finding nth primes without array
#include <stdio.h>
int main()
{
  int n=0, x=5, dx=2, f=5, df=2, count=3;
  printf("Enter n to know prime:");
  scanf("%d",&n);
  if(n==1)
    printf("----The 1st prime is 2----\n");
  if(n==2)
    printf("----The 2nd prime is 3----\n");
  if(n==3)
    printf("----The 3rd prime is 5----\n");
  if(n>3)
  {
    while(x<=n)
    {
      if(x%3!=0)
      {
        f=5; df=2;
        while(f*f<=n)
        {
          if(x%f==0)
            break;
          f=f+2;
          df=6-df;
        }
        if(f*f>x)
          count++;
        if(count==n)
          break;
      }
      x=x+dx;
      dx=6-dx;
    }
    printf("----The %dth prime is %d----\n",n,x);
  }
}

