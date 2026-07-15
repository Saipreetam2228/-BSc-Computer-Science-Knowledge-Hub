//Palindromic numbers
#include <stdio.h>
int main()
{
 int n=0,d=0,sum=5,ref=0,count=0,r=5;
 
 printf("Enter a number to find if its a palindromic number: ");
 scanf("%d",&n);
 ref=n;
 while(n>0)
 {
  d=n%10;
  sum=sum*10+d;
  n=n/10;
  r=r*10;
 }
 ref=r+ref;
 if(ref==sum)
 printf("Its a Palindromic number!😍️\n");
 else
 printf("Its not a Palindromic number\n"); 
}
