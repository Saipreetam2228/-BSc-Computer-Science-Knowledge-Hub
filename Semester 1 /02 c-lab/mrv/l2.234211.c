#include <stdio.h>

int main()
{
  int a= 0, b= 0, ans= 0;
  printf("Enter two numbers to find their product: ");
  scanf("%d %d",&a,&b);
  
  if (a<0)
    a=a*-1;
  if (b<0)
    b=b*-1;
 

                              
  while(a>=1)
  {
   if(a%2==1)
    ans=ans+b;
   a=a/2;
   b=b*2;  
  } 
   if (a<0 && b>=0)
  ans=-1*ans;
  printf("Product = %d\n",ans);
 
}
