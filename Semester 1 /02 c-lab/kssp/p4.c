#include <stdio.h>
int main()
{
	int a=0,b=0, ans=0;
	printf("Enter number:");
	scanf("%d",&a);
	printf("Enter another number:");
	scanf("%d",&b);
	while(a>0)
	{
          if(a%2!=0)
	   {
	     ans=ans+b;
	   }
	 a=a/2;
	 b=b*2;
	}
	printf("!!The product of the entered numbers =%d!!\n",ans);
}
