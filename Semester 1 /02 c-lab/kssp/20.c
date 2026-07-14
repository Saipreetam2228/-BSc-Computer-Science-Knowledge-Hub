//sin(x) taylors theorem
#include <stdio.h>
int main()
{
  int i=1,den=1,sign=1,k=1,j=0,n;
  float num=1.0,sum=0.0,x;
  printf("Enter x:");
  scanf("%f",&x);
  printf("Enter no. of terms:");
  scanf("%d",&n);
  while(i<=n)
  {
    k=2*i-1;
    j=1;
    while(j<=k)
    {
      num=num*x;
      den=den*j;
      j=j+1;
    }
    sum=sum+sign*num/den;
    sign=sign*-1;
    i=i+1;
  } 
  printf("sin(x)=%f\n",sum);
}
