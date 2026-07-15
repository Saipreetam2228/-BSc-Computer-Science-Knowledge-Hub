//filtering out repeating no.s from an array
#include <stdio.h>

int filter(int arr[],int last)
{ 
 int i=1,count=1;
 while(i<last)
 {
  if(arr[i]!=arr[count])
  {
   arr[count]==arr[i];
   printf("arr of  %d  is %d\n",count,arr[count]);
   count=count+1;
   
   
  }
   
  i=i+1;
 }
 //printf("arr of  %d  is %d\n",4,arr[4]);
 i=0;printf("count is %d last is %d\n",count,last);
 while(i<=count)
 { 
  printf(" hi %d\n",arr[i]);
  i=i+1;
 }
   
}









int main()
{
 int n,arr[100]={},last=0,i=0,ans;
 printf("Enter number of numbers you want to enter: ");
 scanf("%d",&last);
 while(i<last)
 {
  printf("%d. ",i+1);
  scanf("%d",&arr[i]);
  i=i+1;
 }
 filter(arr,last);
 
}
