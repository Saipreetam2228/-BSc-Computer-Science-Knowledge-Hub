#include <stdio.h>

void bin(int k)
{
  if(k > 1)
    bin(k/2);
  printf("%d",k%2);
}

int main()
{
  int k=0;
  printf("Enter a number to find its binary: ");
  scanf("%d",&k);
  bin(k);
  printf("\n");
}
