//find if factorial
#include <stdio.h>
int main ()
{
 int i=0,prod=1,n=0;
 printf("Enter a number to find if its a factorial: ");
 scanf("%d",&n);
 if (n==1)
  printf("%d is a factorial of 0 and 1😍️\n",n);
 else
 {
   while(prod<n)
    {
     i=i+1;
     prod=prod*i;
     //i=i+1;
    }
   if (prod==n)
     printf("%d is a factorial of %d😍️\n",n,i);
   else 
     printf("%d is not a factorial🤔️\n",n);
 }

}
