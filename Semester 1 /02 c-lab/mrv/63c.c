#include <stdio.h>
void vardhan(int last, int arr[])
{
 int j=0,count=1;
 while(j<last)
 {
  if(arr[j]!=arr[j-1])
  {
   arr[count]==arr[j];
   printf("arr of  %d  is %d\n",count,arr[count]);
   count=count+1;
  } 
  j=j+1;
 }
 j=0;
 while(j<last)
 {
  printf("%d. ",arr[j]);
  j=j+1;
 }
 
}



int main()
{
 int arr[5]={},last=0,i=0;
 printf("Enter number of numbers you want to enter: ");
 scanf("%d",&last);
 
 //printf("%d \n",arr[0]);
 while(i<last)
 {
  printf("%d. ",i+1);
  scanf("%d",&arr[i]);
  i=i+1;
 }
 vardhan(last);
 i=0;
 while(i<last)
 {
  printf("%d ",arr[i]);
  i=i+1;
 }
}

