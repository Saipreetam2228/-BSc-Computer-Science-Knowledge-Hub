//swaping of 2 no.'s
#include <stdio.h>
int main()
{
  int i= 0, j= 0, k= 0;
  printf("Enter the values of i and j: ");
  scanf("%d %d",&i,&j);
  printf("i is %d and j is %d\n",i,j);
  k=j;
  j=i;
  i=k;
  printf("i is %d and j is %d\n",i,j);
}
