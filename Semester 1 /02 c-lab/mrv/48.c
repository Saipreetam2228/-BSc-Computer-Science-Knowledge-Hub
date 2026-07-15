//rotation of numbers
#include <stdio.h>
int main()
{
 int n=0,d=0,ref=0,zeros=1,fc=0,count=0;
 
 printf("Enter a number to find if its rotations: ");
 scanf("%d",&n);
 ref=n;
 printf("The combinations are: \n");
 while(n>9)
 {
  n=n/10;
  zeros=zeros*10;
  count=count+1;
 }
 n=ref;
 while(count>0) 
 {
 if(n%10==0)
  {
   n=n/10;
   count=count-1;
   continue;
  }
 d=n%10;
 n=d*zeros+n/10;
 printf("%d \n",n);
 count=count-1;
 }
 












}
