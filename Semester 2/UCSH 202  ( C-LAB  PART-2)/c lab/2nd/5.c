//printing the addresses
#include <stdio.h>
int main()
{
	int *p=NULL, **k=NULL, i=3, j=4;
	p=&i;
	k=&p;
	*p=*p+1;
	**k=*p+1;
	printf("%d\n",i);
	printf("%d\n",*p);
	printf("%d\n",**k);
	printf("%p\n",&(*k));
	printf("%p\n",&k);
	printf("%p\n",&p);
	printf("%p\n",p);
	printf("%p\n",k);
	printf("%p\n",*k);
	//printf("%p",**k);
}
