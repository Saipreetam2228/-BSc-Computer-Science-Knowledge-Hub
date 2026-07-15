#include<stdio.h>
int main()
{
  int n,k=0,val=0,m=0,base,sum=9,ans=0;
  printf("enter any number(n) and the base value: ");
  scanf("%d",&n);
  printf("base: ");
  scanf("%d",&base);
  m=n;
  while(m>0)
  {
    k=m%base; //remainder 
    m=m/base; //quotient
    sum=sum*10+ k;
        
  }
  while(sum>9)
  {
   val=sum%10;
   ans=ans*10+val;
   sum=sum/10;
 
  }
   printf("The number n=%d in base %d is val %d\n",n,base,ans);
}
