#include <stdio.h>






int main()
{
 int arr[100]={},last,i=0,ans;
  printf("Enter number of numbers you want to enter: ");
  scanf("%d",&last);
  while(i<last)
  {
   printf("%d. ",i+1);
   scanf("%d",&arr[i]);
   i=i+1;
  } 
 ans=vardhan(arr,last);
}
}
