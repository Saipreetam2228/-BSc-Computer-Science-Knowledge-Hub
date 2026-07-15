#include <stdio.h>

int main()
{
  int a= 0, b= 0, ans= 0;
  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);
  if (a<0 || b<0)
  printf("Please enter values greater than 0 \n");
 else
 {                              
  while(a>=1)
  {
   if(a%2==1)
    ans=ans+b;
   a=a/2;
   b=b*2;  
  } 
  printf("Product = %d\n",ans);
 }
}
