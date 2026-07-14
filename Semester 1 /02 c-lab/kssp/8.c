#include <stdio.h>
int main()
{
  int i=0, j=0,k=0;
  printf("Enter the value of i ,j and k:");
  scanf("%d %d %d", &i,&j,&k);
 {
  if (i<j)
   {
    if (i<k)
      printf("I is min");
   }  
  else
  {
    if (j<i)
      if (j<k)
        printf("J is min");
        else
          printf("K is min");
  }
 } 
}
