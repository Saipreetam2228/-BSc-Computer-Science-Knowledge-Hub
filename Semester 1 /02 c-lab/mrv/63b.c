#include <stdio.h>
int main()
{
 int n,arr[100]={},last=0,i=0,ans,count=1;
 printf("Enter number of numbers you want to enter: ");
 scanf("%d",&last);
 while(i<last)
 {
  printf("%d. ",i+1);
  scanf("%d",&arr[i]);
  i=i+1;
 }
 
 i=0;
 while(i<last)
 {
  printf("%d\n",arr[i]);
  i=i+1;
 }
 printf("break\n");
 
 //printf("count is %d\n",count);
 printf("count is %d last is %d\n",count,last);
 i=1;
 while(i<last)
 {
  if(arr[i]!=arr[i-1])
  {
   arr[count]==arr[i];
   count=count+1;
  }
  i=i+1;
  printf("count is %d last is %d\n",count,last);
  
  i=0;
 while(i<count)
 {
  printf("%d\n",arr[i]);
  i=i+1;
 }
 }
  }
