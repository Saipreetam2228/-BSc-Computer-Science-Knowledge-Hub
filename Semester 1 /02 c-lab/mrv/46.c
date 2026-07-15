// find if prime method 2
#include <stdio.h>
int main()
{
 int x=5,n=0,f=0,df=2,dx=2,sum=2;
 
 printf("Enter a number to get all the primes till it:  ");
 scanf("%d",&n);
 
 printf("2\n3\n");
  while(x<=n)
   {
    if(x%3!=0)
      {
       df=2;
       for(f=5;f*f<=x;df=6-df)
         {  
          if(x%f==0)
            break; 
          f=f+df;
         }
       if(f*f>x)
         {
          printf("%d\n",x);
          sum=sum+1;
         }   
      }
    x=x+dx;
    dx=6-dx;    
   }
   printf("Total primes till n are %d\n",sum);
   
 
 
 

}
