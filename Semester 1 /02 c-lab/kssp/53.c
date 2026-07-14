//factorial checking using array
#include <stdio.h>
int main()
{
  int k[100]={};
  int i=2,fact=1,n=0,c=0,j=0;
  printf("Enter a no. to check if it is factorial or not:");
  scanf("%d",&n);
  k[0]=1;
  k[1]=1;
  i=2;
  while(i<100)
  {
    k[i]=k[i-1]*i;
    //printf("%d\n",k[i]);
    i=i+1;    
  }
  while(k[j]!=n)
  {
    j=j+1;
  }
  if(k[j]==n)
     printf("The entered no. is a factorial of %d!!\n",j);
  else
     printf("The entered no. is not a factorial!!\n");
}

