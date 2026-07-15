//Arithmetic pointers
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i=1;
  char *p=NULL;
  p=(char*)&i;
  p=p+1;
  *p=2;
  printf("%d\n",i);
}
