//Max of 3
#include <stdio.h>
int main()
{
  int i=0, j=0,k=0;
  printf("Enter the value of i ,j and k:");
  scanf("%d %d %d", &i,&j,&k);
 {
  if (i>j)
   {
    if (i>k)
      printf("I is max");
   }  
  else
  {
    if (j>i)
      if (j>k)
        printf("J is max");
        else
          printf("K is max");
  }
 } 
}
