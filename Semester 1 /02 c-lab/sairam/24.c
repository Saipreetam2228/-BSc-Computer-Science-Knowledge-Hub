//reverse order
#include <stdio.h>
int main()
{
  int n=0,u=0,sum=0,k=0;
  printf("enter any digit :");
  scanf("%d",&n);
  u=n;
  while(u>0)
  {
    k=u%10;
    sum=sum*10+k;
    u=u/10;
  }
  printf("The reverse order of %d is= %d\n",n,sum);
}
