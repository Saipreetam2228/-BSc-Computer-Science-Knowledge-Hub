//cos(x) tyler's theorem
#include <stdio.h>
int main()
{
  int i=1, den=1,n=0;
  float num=1.0, x=0.0, sum=0.0;
  printf("Enter x radians to compute cos(x):");
  scanf("%f",&x);
  printf("Enter N no. of terms:");
  scanf("%d",&n);
  while(i<=n)
  {
    sum=sum+(num/den);
    num=num*x*x-1;
    den=den*(2*i-1)*(2*i);
    i=i+1;
  }
  printf("The cos(%f) for %d terms is : %f !!\n",x,n,sum);
  
}
