#include <stdio.h>
int main()
{
 int x=5,n,f=0,df=2,dx=2,sum=2;
 
 printf("Enter n to find nth prime number:  ");
 scanf("%d",&n);
 
 //printf("2\n3\n");
 while(n<1)
  {printf("Enter a number greater than 0 please!:  ");
 scanf("%d",&n);}
 
 if(n==1)
 printf("THe 1st prime is 2\n");
  else
  if(n==2)
  printf("THe 2nd prime is 3\n");
  else
  {
  while(sum<n)
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
          //printf("%d\n",x);
          sum=sum+1;
          if(n==sum)
           break;
         }   
      }
    x=x+dx;
    dx=6-dx;    
   }
   if(n==3)
   printf("THe 3rd prime is %d\n",x);
   else
   printf("THe %dth prime is %d\n",n,x);  
 }
}
