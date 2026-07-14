//factorial
#include <stdio.h>
int main()
{
  int i=1,n=0,fact=1;
  printf("Enter n:");
  scanf("%d",&n);
  while(i<=n)
  {
    fact=fact*i;
    i=i+1;
  } 
    printf("%d! = %d",n,fact);
    
}
