//palindromic number
#include <stdio.h>
int main()
{
  int n=0,i=0,pal=0,d=0;
  printf("Enter a no. to check it is PALINDROME or not:");
  scanf("%d",&n);
  for(i=n; i>0; i=i/10)
  {
     d=i%10;
     pal=pal*10+d;  
  }
  if(pal==n)
    printf("The entered no. %d is a PALINDROME NUMBER!!",n);
  else
    printf("The entered no. %d is not a PALINDROME NUMBBER!!",n);
}

