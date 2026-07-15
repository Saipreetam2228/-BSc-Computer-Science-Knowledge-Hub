#include <stdio.h>
void swap (int*,int*);
int main()
{
	int i,j;
	printf("Enter the first number:");
	scanf("%d", &i);
	printf("enter the second number:");
	scanf("%d", &j);
	swap(&i,&j);
	printf("%d %d", i,j);
}
void swap(int*i,int*j)
{
	int c=0;
	c=*i;
	*i=*j;
	*j=c;
	return;
}
