#include<stdio.h>
int main()
{
  int x=1,sum=0,n=0,y,r;
  printf("enter number(n): ");
  scanf("%d",&n);
  while(x<n)
  {
    sum=0;
    y=x;
    while(y>0)
    {
      r=y%10;
      r=r*r*r;
      sum=sum+r;
      y=y/10;
   
    }  
    if (sum==x)
      printf("%d\n",sum);
  
    x=x+1;
  }
 
}






