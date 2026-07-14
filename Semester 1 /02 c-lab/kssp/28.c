#include <stdio.h>
int main()
{
  int n=0, k=0;
  printf("Enter no. to check divisibility:");
  scanf("%d",&n);
  k=n%10;
  if(k%5==0)
    printf("!!The entered no. %d is divisible by 5!!",n);
  else
    printf("!!The entered no. is not divisible by 5!!");
}
