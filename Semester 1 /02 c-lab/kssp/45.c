//sum of array
#include <stdio.h>
int main()
{
  int i=0, sum=0, n=200,m=0;
  int k[200]={};
  printf("Enter no. of no.'s :");
  scanf("%d",&m);
  for(i=0; i<m; i++)
     k[i]=i+1;
  for(i=0; i<m; i++)
     sum=sum+k[i];
  for(i=0; i<m; i++)
     printf("%d\n",k[i]);
  printf("!!The sum of the array entered is %d\n!!",sum);
  
}
