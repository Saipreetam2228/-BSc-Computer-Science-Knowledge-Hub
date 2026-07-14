//labtest 2
#include <stdio.h>
int main()
{
  int a= 0, b= 0, ans= 0;
  printf("Enter two numbers: ");
  scanf("%d %d",&a,&b);
  ans=0;
  while(a>0)
  { 
    if(a%2!=0)
      ans=ans+b;
    a=a/2;
    b=b*2;
  }
  printf("Product = %d\n",ans);
}

