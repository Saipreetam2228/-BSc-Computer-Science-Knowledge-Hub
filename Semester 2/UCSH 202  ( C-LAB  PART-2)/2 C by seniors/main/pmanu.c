#include "stdio.h"
int main()
{
	int *j=NULL;
	char *k=NULL;
	char **i=NULL;
	int a=37;
	j=&a;
	i=(char **)&j;
	k=(char *)&a;
	printf("Original value of a is %d\n", a);
	*j=795;
	printf("Change after manipulating with integer pointer: %d\n", a);
	*k=97;
	printf("Change after manipulating with charecter pointer: %d\n", a);
	*i=(char *)&a;
	**i=255;
	printf("Change after using double charecter pointer: %d\n", a);
}
