//max of an array using function
#include <stdio.h>
int max(int arr[], int n);
int main()
{
  int i=0,n=0,k=0;
  int arr[100]={};
  printf("Enter no. of no.'s:");
  scanf("%d",&n);
  printf("!!Enter the values to find max!!\n");
  for(i=0; i<n; i++)
     scanf("%d",&arr[i]);
  k=max(arr,n);
  printf("!!%d is max of entered no.'s!!",k);
}
int max(int arr[],int n)
{
  int j=0,m=0;
  m=arr[0];
  for(j=1; j<n; j++)
  {
     if(arr[j]>m)
       m=arr[j];
  }
  return(m);
}
