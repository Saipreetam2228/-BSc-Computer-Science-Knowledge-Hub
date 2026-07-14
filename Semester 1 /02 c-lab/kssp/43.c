//LCM
#include <stdio.h>
int main()
{
  int n=0, i=1,k1=0,k2=0,r1=0,r2=0,j=2;
  printf("Enter no. of no.'s:");
  scanf("%d",&n);
  while(i<n)
  {
    printf("%d.",i);
    scanf("%d",&k1);
    i++;
    printf("%d.",i);
    scanf("%d",&k2);
    i++;
  }
    while(k1>0 && k2>0)
    {
      r1=k1%j;
      r2=k2%j;
      j=j+1;
    }
    printf("!!LCM of the entered no.'s is %d",r1*r2);
  
}

