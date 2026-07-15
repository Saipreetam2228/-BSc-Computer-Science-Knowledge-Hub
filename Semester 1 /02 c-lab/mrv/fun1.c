#include <stdio.h>
int main()
{
  // char q,w,e,r,t,y,u,i,o,p,a,s,d,f,g,h,j,k,l,z,x,c,v,b,n,m;
   int a=0,d=1;
   
   printf("Enter any number");
   scanf("%d",&a);
   
   while(a!=0)
   {
    d=a*4+a;
    a=a-1;
   
   if(d>0&&d<=100)
   printf("😂️\n");
   if(d>=100&&d<=200)
   printf("😍️\n");
   if(d>=200&&d<=300)
   printf("😘️\n");
   if(d>=300&&d<=400)
   printf("💋️\n");
   if(d>=400&&d<=500)
   printf("💔️\n");
   if(d>=500&&d<=600)
   printf("❤️‍🔥️\n");
   else
   printf("%d👅️\n",d);
   }  
   
   
}
