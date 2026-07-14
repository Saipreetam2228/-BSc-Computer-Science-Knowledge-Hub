//reverse of an array
#include <stdio.h>
int rev(int arr[], int n);
int main()
{
  int i=0, n=0, k=0;
  int arr[100]={};
  printf("Enter no. of no.'s:");
  scanf("%d",&n);
  printf("!!Enter the numbers into array!!\n");
  for(i=0; i<n; i++)
     scanf("%d",&arr[i]);
  k=rev(arr,n);
  printf("!!The reversed array is!!\n");
  for(i=0; i<n; i++)
     printf("%d\n",arr[i]);
}
int rev(int arr[], int n)
{
  int i=0, t=0;
  while(i<=n/2)
  {
    t=arr[i];
    arr[i]=arr[n-(i+1)];
    arr[n-(i+1)]=t;
    i++;
  }
  return(arr,n);
}
