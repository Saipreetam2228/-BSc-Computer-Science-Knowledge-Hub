//reverse of number
#include <stdio.h>
int main()
{
  int n=0, k=0, ans=0, d=0;
  printf("Enter n:");
  scanf("%d",&n);
  k=n;
  while(k>0)
  {
    d=k%10;
    ans=ans*10+d;
    k=k/10;
  }
  printf("Reverse of %d is %d\n",n,ans);
}

