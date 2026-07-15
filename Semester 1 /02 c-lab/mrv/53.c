#include <stdio.h>
int main()  
{
 int n=0,primes[10]={},z,f=0,dx=2,df=2,ch=0,x=5,fact[10]={},last=0,i=2,prod=1;
 
 printf("Enter n to find the prime factors of it: ");
 scanf("%d",&n);
 z=n;
 primes[0]=2;
 primes[1]=3;
 //fact[0]=2;
 //fact[1]=3; 
 
  //generating and storing primes upto root n     
  while(x*x<=n)
   {
    if(x%3!=0)
      {
       df=2;
       f=5;
       while(f*f<=x)
         {  
          if(x%f==0)
            break; 
          f=f+df;
          df=6-df;
         }
       if(f*f>x)
         {
          primes[i]=x;
          i=i+1;
         }   
      }
    x=x+dx;
    dx=6-dx;    
   }
  
  
 while(prod!=z)
  {//
  while(n%primes[ch]!=0)
    { printf("2j\n");
      ch=ch+1;
      if(primes[ch]==0)
      break;//printf("2");
      
    }
   while(primes[ch]!=0 && n%primes[ch]==0&& n>1 )
     { printf("j2\n");
      //if(primes[ch]!=0)
     //   break;
   //  printf("%d\n",primes[ch]);
      n=n/primes[ch];
      fact[last]=primes[ch];
      prod=prod*fact[last];         // printf("2");
      last=last+1;
     }
      if(primes[ch]==0 )
       { 
        fact[last]=primes[ch];
        prod=prod*primes[last];
       }
   
   }//
  for(i=0;fact[i]!=0;i=i+1)
  {
    printf("%d ",fact[i]);  // printf("2");
    
  }
 
 
 /// if(x%primes[i]==0)
//   break;
 //  i=i+1;
 //  ch=ch+1;
  // primes[3]
  //}
//  }
 
 
 //printf("%d\n",fact[3]);
 
 
 
 
 
 

 
 
}

























