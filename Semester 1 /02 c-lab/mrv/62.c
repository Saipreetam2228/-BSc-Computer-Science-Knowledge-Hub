//second max
#include <stdio.h>

int secmax(int arr[],int last)
{
 int max=arr[0],max2=arr[0],i=1;
// printf("%d %d",max,max2);
 
 while(i<last)
 {
  if(arr[i]>max)
  {
   max2=max;
   max=arr[i];
  }
  else
  if (arr[i]!=max && arr[i]>max2 || max==max2 )
   max2=arr[i];
  i=i+1;
 }
 return max2;
}

int main()
{
 int n,arr[100]={},last,i=0,ans;
 printf("Enter number of numbers you want to enter: ");
 scanf("%d",&last);
 while(i<last)
 {
  printf("%d. ",i+1);
  scanf("%d",&arr[i]);
  i=i+1;
 } 
 ans=secmax(arr,last);
 printf("%d is second max.\n",ans);
}
