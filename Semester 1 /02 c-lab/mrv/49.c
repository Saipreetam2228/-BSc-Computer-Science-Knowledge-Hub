//d^3=n
#include <stdio.h>
int main()
{
 int n=0,i=100,sum=0,d=0,ref=0;
 
 printf("Enter a number: ");
 scanf("%d",&n);
 ref=i;
 while(i<n)
 { 
  sum= 0;
  while(i>0)
  {
   d=i%10;
   sum=sum+d*d*d;
   i=i/10;
  }
  if(sum==ref)
  printf("%d\n",sum);
  ref=ref+1;
  i=ref; 
 }
 






































//  ref=i;
// 
// while(i>0)
// {
//  d3=i%10;
//  sum=sum+d3*d3*d3;
 // i=i/10;
 // printf("%d\n",i);
// }
 // if(sum==ref)
 // printf("%d",sum);
  //else
  //printf("No");
// }
 
 
}
