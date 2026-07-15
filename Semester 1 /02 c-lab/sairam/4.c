//no.of digits
#include<stdio.h>
int main()
{
  int n,nd=1,k;
  {
    printf("enter code:");
    scanf("%d",&n); 
    k=n;
    while(k>9)
    {
      k=k/10;
      nd=nd+1;
    }
   printf("the no.of digits in:%d is: %d \n",n,nd); 
   
  }
}     
