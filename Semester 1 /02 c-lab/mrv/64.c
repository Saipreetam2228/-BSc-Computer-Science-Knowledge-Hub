#include <stdio.h>
int basechange(),n_fib(),primefac();


	int main()
	{
	 //basechange();
	 //n_fib();
	 primefac();
	}
int basechange()
{
 int n=0,base=0,div=1,sum=0,d;
 printf("Enter the number to change its base: ");
 scanf("%d",&n);
 printf("Enter base(>1): ");
 scanf("%d",&base);
 
 for(;div*base<=n;div=div*base);
 //printf("div %d\n",div);
 while(div>=1)
 {
  d=n/div;
  sum=sum*10+d;
  n=n%div;
  div=div/base; 
 }
 printf("%d\n",sum); 
}


int n_fib()
{
 int f1=0,f2=1,n=0,i=2;
  printf("Enter a number(n) find nth fibonnaci ");
 scanf("%d",&n);
 while(i<n)
 {
  f1=f1+f2;
  f2=f1+f2;
  i=i+2;
 }
 if(i==n)
   printf("%d\n",f2);
 else
   printf("%d\n",f1);
}


int primefac()
{
  int n=0,arr[1000],x=5,dx=2,df=2,i=2,f=5;
  printf("Enter a number find its prime factors: ");
  scanf("%d",&n);
  
  arr[0]=2;
  arr[1]=3;
  x=5;
  while(x*x<=n && x!=0)
  {
   while(f*f<=x && f!=0)
    {
     if(x%f==0 || x%2==0 || x%3==0)     
      break;
     f=f+df;
     df=6-df;  
    }
    
    if(f*f>x)
     {
      arr[i]=x;
      i=i+1;
     }
    x=x+dx;
    dx=6-dx;
  }
  f=0;
  while(f<=i)
  {
   while(n%arr[f]==0)
    {
     printf("%d",arr[i]);
     n=n/arr[i];
    }     
   f=f+1;
  }
  
  
}



