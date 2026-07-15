//max of 3 numbers.
#include <stdio.h>
int main()
{
  int i=0,j=0,k=0;
  printf("enter the values i,j,k:");
  scanf("%d %d %d",&i,&j,&k);
  {
  if (i>j)
   {
     if (i>k)
       printf("i is max\n");
   }
    else
    {
      if (j>i)
       if (j>k)
         printf("j is max\n");
       else 
         printf("k is max\n");
    }
  
  }

}
