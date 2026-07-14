#include <stdio.h>
int main()
{
  float o=0.0 ,n=0.0, g1=0.0, e=0.0001;
  printf("Enter n:");
  scanf("%f",&n);
  g1=n/2;
  while((g1*g1-n)>e)
  {
    o=n/g1;
    g1=(g1+o)/2;
  }
  printf("!!The square root of the no. %f is %f !!\n",n,g1);
}
