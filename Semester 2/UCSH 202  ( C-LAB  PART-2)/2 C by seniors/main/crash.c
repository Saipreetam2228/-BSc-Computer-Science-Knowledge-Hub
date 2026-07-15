#include <stdio.h>
#include <stdlib.h>
void crash();
int main()
{
	int i=0;
	for(i=0;i<32000000000;i++)
		crash();
}
void crash()
{
	int *j=NULL;
	j=malloc(1048576);
}
