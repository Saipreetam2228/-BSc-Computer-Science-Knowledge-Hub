//find prime , composite, uinque
#include <stdio.h>
int main()
{
  int n=0, i=1,count=0,j=0;
  printf("Enter a number:");
  scanf("%d",&n);
  while(j<=n)
  {
    if(n%i==0)
      count=count+1;
    i=i+1;
    j=j+1;
  }
  if(n==1)
    printf("!!The entered no. is UINIQE!!");
  if(count==2)
    printf("!!The entered no. is a PRIME NUMBER!!");
  if(count>2)
    printf("!!The entered no. is a COMOPOSITE NUMBER!!");
  
}
