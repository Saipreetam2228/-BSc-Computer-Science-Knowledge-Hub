//prime
#include <stdio.h>
int main()
{
   int n=0, x=5, dx=2,f=5,df=2;
   printf("!!Enter the N no.'s to know primes between them!!\n");
   scanf("%d",&n);
   printf("-----The prime no.'s between 2-%d-----\n",n);
   printf("2\n3\n");
   while(x<=n)
   {
     if(x%3!=0)
     {
       f=5; df=2;
       while(f*f<=n)
       {
         if(x%f==0)
           break;
         f=f+2;
         df=6-df;
       }
       if(f*f>x)
         printf("%d\n",x);
     }
     x=x+dx;
     dx=6-dx;
   }
   printf("-----The prime no.'s between 2-%d-----\n",n);
}
