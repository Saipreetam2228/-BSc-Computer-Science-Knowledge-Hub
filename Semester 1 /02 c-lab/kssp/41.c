//smallest non trival factor of n
#include <stdio.h>
int main()
{
  int n=0, f=3;
  printf("Enter a number:");
  scanf("%d",&n);
  if(n%2==0)
    printf("!! 2 is the smallest non trival factor of %d !!\n",n);
  else
  {
    while(n%f!=0 && f*f<=n)
    f=f+2;
    {
      if(f*f>n)
        printf("!!%d is the prime no.!!\n",n);
      else
        printf("!!%d is the highest non trival factor of %d !!\n",f,n);
    }
    f=f+2;
  }
}
