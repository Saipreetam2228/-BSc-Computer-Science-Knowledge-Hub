//finite loop with conditions
#include <stdio.h>
int main()
{
  int i=0,j=0;
  printf("enter i,j values: ");
  scanf("%d%d",&i,&j);
  if (i>j)
 { 
  while (i>j)
  { printf("i =%d,j=%d\n",i,j);
       j=j+1;
   }}
  else
  {while (j>i)
  { printf("i =%d,j=%d\n",i,j);
       i=i+1;
   }}
  printf("last statement is i =%d,j=%d\n",i,j);
}
    
  
