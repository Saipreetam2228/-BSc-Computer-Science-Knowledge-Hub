//rotation of numbers
#include <stdio.h>
int main()
{
	int i=0,n=0,d=0,d1=0,len=0,j=1,pow=1,m=0,ans=0;
	printf("Enter a number:");
	scanf("%d",&n);
	m=n;
	for(i=n; i>0; i=i/10)
	{
		d=i%10;
		len++;
	}
	i=1;
	while(i<len)
	{
		j=j*10;
		i++;
	}
	i=0;
	while(i<len)
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
