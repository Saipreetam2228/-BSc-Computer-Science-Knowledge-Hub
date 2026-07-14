#include <stdio.h>
int main()
{
  int n=0,k=0,count=0,d=0;
  printf("Enter n:");
  scanf("%d",&n);
  k=n;
  while(k>0)
  {
    d=k%10;
    count=count+1;
    k=k/10;
  }
  printf("No. of digits in %d are %d\n",n,count);
}
