#include <stdio.h>
int main()
{
  int n=0, k=0,d=0, sum=0, div,b,div1;
  printf("Enter a no. to check divisibility :");
  scanf("%d",&n);
  k=n;
  div=k%2;
  div1=k%3;
  if (div==div1)
    printf("!!The entered no. %d is divisible by 6!!",n);
  else
    printf("!!The entered no. is not divisible by 6!!");
    
}
  
