//finite loop 
#include <stdio.h>
int main()
{
  int   i=3,n;
  printf("enter number: ");
  scanf("%d",&i);
  printf("enter no of times: ");
  scanf("%d",&n);
  while(i<=n)
   { printf("%d\n",i);
    i=i+1;
}
  
}
