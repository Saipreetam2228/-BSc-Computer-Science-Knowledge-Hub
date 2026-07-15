//swaping with 2 num
#include <stdio.h>
int main()
{
  int i=0,j=0,k=0;
  printf("enter i,j values: ");
  scanf("%d%d",&i,&j);
  printf("i is %d and j is %d \n",i,j);
  k=j;
  j=i;
  i=k;
  printf("i is %d and j is %d \n",i,j);
}
