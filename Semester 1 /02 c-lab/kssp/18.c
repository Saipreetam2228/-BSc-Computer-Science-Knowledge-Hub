//Power^n
#include <stdio.h>
int main()
{
  int i=0,x=1,n,ans=1;
  printf("Enter x and n:");
  scanf("%d %d",&x,&n);
  while (i<n)
  {
    ans=ans*x;
    i=i+1;
  }
  printf("!!Power of %d to terms %d is %d !!\n",x,n,ans);
}
