#include <stdio.h>
int main()
{
	int arr[5]={8,14,257,1079,6780};
	int *i=NULL;
	i=arr;
	*(i+1)=376;
	printf("%d\n", arr[1]);
	char *c=NULL;
	c=(char *)arr;
	*(c+15)=46;
	printf("%d\n", arr[3]);
}
