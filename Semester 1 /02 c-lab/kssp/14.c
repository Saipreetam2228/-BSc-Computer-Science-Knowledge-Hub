#include <stdio.h>
int main()
{
  int i=0,n=0,prod=1,k=0;
  printf("Enter the no. of numbers:");
  scanf("%d",&n);
  while(i<n)
  {
    printf("%d.",i+1);
    scanf("%d",&k);
    i=i+1;
    prod=prod*k;
  } 
    printf("Product  of n no.s is %d",prod);
    
}
