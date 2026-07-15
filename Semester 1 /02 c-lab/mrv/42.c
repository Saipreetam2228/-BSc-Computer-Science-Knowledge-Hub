//hcf
#include <stdio.h>
int main()
{
 int m=0,n=0,l=0,s=0,i=2,z=0,r=1;
 printf("Let's find the hcf of 2 numbers m &n:\nEnter the value of m: ");
 scanf("%d",&m);
 printf("Enter the value of n: ");
 scanf("%d",&n);
  if(m>n)
   {
    l=m;
    s=n;
   }
  else
   {
    l=n;
    s=m;
   }
   z=s;
   while(r!=0)
    {
    while(s+z<=l)
      {
      s=s+z;
       if(s==l)
        {r=0;
         break;
        }
      }
      if(r==0)
    break;
    r=l-s;
    l=z;
    z=r;
    s=r;    
   }
 printf("%d is the HCF of %d and %d\n",z,m,n);

}
