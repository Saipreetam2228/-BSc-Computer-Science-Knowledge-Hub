
//d1d2d3=d1^3+d2^3+d3^3
#include <stdio.h>
int main()
{
  int n=100,sum=0,d=0,j=0,x=0;
  int k[10]={};
  printf("!!Three digit numbers whose sum of their cubes of the digits is same as the NUMBER!!\n");
  while(n<=999)
  { 
    sum=0;
    for(x=n; x>0; x=x/10)
    {
     d=x%10;
     sum=sum+d*d*d;
     //printf("%d",sum);
    }
    if(sum==n)
    {
      k[j]=n;
      printf("%d\n",k[j]);
      j=j+1;
    }
    n=n+1;
  }  
}
