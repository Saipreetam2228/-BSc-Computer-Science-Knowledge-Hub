#include <stdio.h>
int main()
{
  int n=0, k=0,d=0, sum=0, div,b;
  printf("Enter a no. to check divisibility :");
  scanf("%d",&n);
  k=n;
  while(k>0)
  {
    d=k%10;
    sum=sum+d;
    k=k/10;
  }
  if(sum%3==0)
  {
    printf("!!The entered no. %d is divisible by 3!!",n);
  }
  else
  {
    printf("!!The entered no. is not divisible by 3!!");
  }
}
