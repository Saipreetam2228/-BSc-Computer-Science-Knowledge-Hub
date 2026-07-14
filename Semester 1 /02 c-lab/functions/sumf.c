#include<stdio.h>


// code 
int sumf(int n)
{
  int sum=0,i=1;
  while(i<=n)
  {
    sum=sum+i;
    i=i+1;
  }
  return sum;
}


// only input and output function
int main()
{
  int n,ans;
  printf("enter the value; ");
  scanf("%d",&n);
  ans=sumf(n); 
  printf("ans is %d\n",ans);
}
