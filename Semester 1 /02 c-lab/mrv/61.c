//Print binary version of an integer(without array)
#include <stdio.h>
int bin(int n,int i)
{
 if (i==1 && n==1)
 return 1;
 if (i==1 && n==0)
 return 0;
 else 
  {
   printf("%d ",n/i);
   bin(n%i,i/2);  
  } 
}

int main()
{ 
 int n,i,r=0;
 printf("Enter a number to find its binary: ");
 scanf("%d",&n);
 for(i=2;i*2<=n;i=2*i);
 r=bin(n,i);
 printf("%d \n",r);
}
