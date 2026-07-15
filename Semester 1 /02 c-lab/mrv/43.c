#include <stdio.h>
int main()
{
 //printf("Enter the no. of values: ");
// scanf("%d",&n);

int a[565]={},sum=0,i,n=0;
 
 for(i=0;i<565;i=i+1)
  {
   a[i]=i+1;                                                                
   printf("%d\n",a[i]);
   sum=sum+a[i];

  }
 printf("Total sum is %d\n",sum);
  



}
