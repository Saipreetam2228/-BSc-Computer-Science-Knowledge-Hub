// nth fibinocci number;
 #include<stdio.h>
 int main()
 {
   int fn,fnp1,f2n,f2np1,i,n,t,d;
   d=arr[100]={};
   {
     i=1;
     while(n>1)
     {
       d[i]=n%2;
       n=n/2;
       i=i+1;
     }
     i=i=1;
     fn=0;
     fnp1=0;
     while(i>1)
     {
       f2n=fnp1*fnp1+fn*fn;
       f2np1=fnp1*fnp1+2*fnp1+fn;
       if d[i]=1;
       {
         fn=f2np1;
         fnp1=f2n+f2np1;
       }
       else
       {
         fn=f2n;
         fnp1=f2np1;
       }
       i=i-1;
     }
     printf("%d",fn);
   }
 }
