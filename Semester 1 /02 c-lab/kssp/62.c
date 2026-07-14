//factorial using function
#include <stdio.h>
int fact(int);
int main()
{
  int n=0,k=0,i=1,f=1;
  printf("Enter NUMBER to find its factorial:");
  scanf("%d",&n);
  k=fact(n);
  printf("!!The FACTORIAL of entered no. is!!\n%d != %d\n",n,k);
}
int fact(int n)
{
  int i=1,f=1;
  while(i<=n)
  {
    f=f*i;
    i=i+1;
  }
  return(f);
}
