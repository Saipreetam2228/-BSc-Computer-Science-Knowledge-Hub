//divisiblity rule of 11
#include <stdio.h>
int main()
{
  int n=0,k=0,i=1,sum=0,sum1=0,d,m;
  printf("Enter a no. to check its divisibility:");
  scanf("%d",&n);
  m=n;
 k=n%10;
  while(k>0)
  {
    if(i%2==0)
    {
      sum=sum+k;
     //printf("%d",sum);
      }
    else
    {
      sum1=sum1+k;
      //printf("%d",sum1);
      }
    i=i+1;
    n=n/10;
    k=n%10;

	/*d= k%10;
	k= k/10;
	sum= sum+d;
	d= k%10;
	k=k/10;
	sum1=sum1+d;*/
  }
  d=sum-sum1;
  //printf("%d \n %d \n",sum,d);
  
  if(d%11==0)
    printf("!!The entered no. %d is divisible by 11!!\n",m);
  else
    printf("!!The entered no. is not divisible by 11!!\n");
}

