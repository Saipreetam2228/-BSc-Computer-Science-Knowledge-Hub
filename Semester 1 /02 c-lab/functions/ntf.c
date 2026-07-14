// non-trivial factors with diff print
#include<stdio.h>
int main()
{
 int i,a,c,v,count,p,q,n ;
 i=2,c=0;
 printf("Enter the valid number: ");
 scanf("%d",&n);
 
 count=0;
 p=n,v=2;
 while(p>1)
 {
   if (p%v==0)
     count = count+1;
   else
     v=v+1;
    
  }
 if (count>2)
   printf("the non-trivial factor of %d are",n);
 else
   printf("the non-trivial factor of %d is",n);
   
 q=n;
 v=2;
 while(q>1)
 {
   if(q%v==0)
   {
     printf("%d",v);
     p=p%v;
   }
   else
     v=v+1;
   
   
   a=count-1;
   if (a==c)
     printf(" and %d",i);
 }
}






