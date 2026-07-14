//seive of errathasthonis
#include <stdio.h>
int main()
{
  int i=0, n=0,x=5,dx=2,f=5,df=2;
  int k[999999]={};
  printf("!!Enter the N no.'s!!\n");
  scanf("%d",&n);
  printf("2\n3\n5\n");
  for(i=0; x<=n; i++)
  {
      if(x%3!=0)
      {
         f=5,df=2;
         while(f*f<n)
         {
           if(x%f==0)
             break;
           f=f+2;
           df=6-df;
         }
         if(f*f>n)
           k[i]=x;
         if(k[i]!=0)
           printf("%d\n",k[i]);
      }
      x=x+dx;
      dx=6-dx;     
  }
  printf("----Seive of Errathosthanis------\n");
}
