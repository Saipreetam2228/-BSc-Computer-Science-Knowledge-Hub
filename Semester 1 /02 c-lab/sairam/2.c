//Fibinocci 
#include<stdio.h>
int main()
{
  int f1=0,f2=1,n,i=2;
  printf("enter n:");
  scanf("%d",&n);
  while(i<n)
  {
   printf("%d,%d,",f1,f2);
   f1=f1+f2;
   f2=f1+f2;
   i=i+2;
  }
 
     if (i==n)
      printf("%d,%d\n",f1,f2);
     else
      printf("%d\n",f1);
}
