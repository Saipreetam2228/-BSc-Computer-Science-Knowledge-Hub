#include<stdio.h>
#include<stdlib.h>
void swap(int *a , int *b)
{
  int t ;
  t = *a ;
  *a = *b ;
  *b = t ;
}
int main()
{
  int x = 0 , y = 0 ;
  printf("Enter x and y :");
  scanf("%d %d",&x , &y);
  swap(&x,&y);
  printf("%d %d \n",x,y);
}
