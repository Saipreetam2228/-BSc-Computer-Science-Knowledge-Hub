//cos(x) taylor's theorem
#include <stdio.h>
int main()
{
  int i=2,k=1,den=1,j;
  float n=0,x=0,num=0.0,sum=1.0,b;
  printf("Enter x:");
  scanf("%f",&x);
  printf("Enter no. of terms:");
  scanf("%f",&n);
  while(i<=n)
  {
    k=2*i;
    j=1;
    while(j<=k)
    {
      num=num*x*x*-1;
      den=den*j;
      j=j+1;
    }
    sum=sum+num/den;
    b=num/den;
    printf("%f",b);
    i=i+1;   
  }
  printf("Cos(x)=%f\n",sum);
  
}
