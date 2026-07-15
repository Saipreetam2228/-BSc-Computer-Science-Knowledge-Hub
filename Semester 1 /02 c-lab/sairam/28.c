// prime  factorisation
#include<stdio.h>
int main()
{
  int n,s,v ;
  printf("enter the value: ");
  scanf("%d",&s);
  n=s;
  v=2;
  printf("The prime factorisation of %d is \n",n);
  while(n>1)
  {
    if (n%v==0)
    {
      n=n/v;
      printf("%d",v);
         
    }
    
    else
    { 
      v=v+1;
    }
    if (n%v==0)
      printf(" * ");

  }
   printf(" = %d\n",s);
}
