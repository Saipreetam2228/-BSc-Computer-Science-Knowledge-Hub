/find all the factors of N
#include <stdio.h>
int main()
{ int n=0,arr[10]={},i=2,last=0;
 printf("Enter a number to find its factors ");
 scanf("%d",&n);
 
 while(i<n)
 {
  if(n%i==0)
  {
   arr[last]=i;
   last=last+1;
  }
  i=i+1;
 }
 for(i=0;i<last;i=i+1)
 {
  if(i+1<last && i>0)
    printf(",");
   if(i+1==last)
    printf(" and ");
  printf("%d",arr[i]);
 }
 if(last==0 & n>1)
 printf("Its a prime");
 printf("\n");
}
