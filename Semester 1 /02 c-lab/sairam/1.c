// star program
#include <stdio.h>
int main()
{
  int n=0,i=0,k=0;
    printf("enter the number:");
    scanf("%d",&n);
     while(i<n)
  {   printf("*");
     k=0;
     
     while(k<i)
     { printf("-*");
       k=k+1;
     }
     printf("\n");
     i=i+1;
     
     
   } 
   
}
