//rotation of a number
#include <stdio.h>
int main()
{
  int i=0,n=0,d=0,len=0,d1=0,ans=0,m=0,j=1;
  printf("Enter a number:");
  scanf("%d",&n);
  m=n;
  for(i=n; i>0; i=i/10)//for getting the length of entred no.
  {
    d=i%10;
    len++;
  }
  i=0;
  while(i<len-1)//to get necesary j value
  {
    j=j*10;
    i=i+1;
  }
  i=0;
  while(i<len)//to rotate the number upto the length
  {
    d=n%10;
    d1=n/10;
    ans=(d*j)+d1;
    if(ans==m)
      break;
    printf("%d\n",ans);
    n=ans;
    i++;
  }
}

