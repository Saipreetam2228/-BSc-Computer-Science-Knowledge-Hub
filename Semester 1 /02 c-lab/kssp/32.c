//star printing
#include <stdio.h>
int main()
{
  int i=1, j=2, n=0;
  printf("Enter n:");
  scanf("%d",&n);
  while(i<=n)
  {
    printf("#");
    while(j<=i)
    {
      printf("_#");
      j++;
    }
    j=2;
    i++;
    printf("\n");

  }
}
