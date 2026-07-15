#include <stdio.h>

int main()
{
  int a= 0, b= 0, ans= 0;
  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);

  while(a>1)
  {
    a=a/2;
    b=b*2;
    ans=ans+b;
  }
  
  
  printf("Product = %d\n",ans);
}
