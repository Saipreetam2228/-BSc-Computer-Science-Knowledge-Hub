//fibonnaci numbers
#include <stdio.h>
int main()
{
  int i=2,f1=0,f2=1,n=0;
  printf("Enter n:");
  scanf("%d",&n);
  while(i<n)
  {
    printf("%d \n%d \n",f1,f2);
    f1=f1+f2;
    f2=f1+f2;
    i=i+2;
  }
  if (i==n)
    printf("%d \n%d \n",f1,f2);
  else
    printf("%d\n",f1);
}
