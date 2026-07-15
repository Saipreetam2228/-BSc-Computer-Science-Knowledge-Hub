//array sieve
#include <stdio.h>
int main()
{
 int ar[1000]={},i=1,n=0,diff=2      ;
 
 
 printf("Enter a number to get all the primes till it:  ");
 scanf("%d",&n);
 
 printf("2\n3\n");
 ar[0]=5;        // printf("%d\n",ar[0]);
 while(ar[i]<=n)   //ar[i]<=n
 {
  ar[i]=ar[i-1]+diff;
  diff=6-diff;
  i=i+1;
 }
  i=0;
 while(ar[i]<=n)
  {
   printf("%d\n",ar[i]);
   i=i+1; 
  }
}
