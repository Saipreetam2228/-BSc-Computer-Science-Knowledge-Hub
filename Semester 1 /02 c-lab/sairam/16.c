#include <stdio.h>
int main()
{
  int i=0,n=0,k=0,prod=1;
  printf("how many number u need (n): ");
  scanf("%d",&n);
  while(i<n)
  {
    printf("%d.",i+1);
    scanf("%d",&k);
    prod=prod*k;
    i=i+1;
  }
  printf("product is %d\n",prod);
}
