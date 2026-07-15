#include<stdio.h>
int main()
{
  int n=0,f=0;
  printf(" enter a valid number: ");
  scanf("%d",&n);
  if (n%2==0)
    printf("smallest non-trivial factor of %d is 2\n",n);
  else
  {
    f=3;
    while(n%f!=0 && f*f<=n )
    f=f+2;
    if (f*f>n)
      printf("%d is prime\n",n);
    else
      printf("smallest non-trivial factor of %d  is %d\n",n,f);
  }
  
}
