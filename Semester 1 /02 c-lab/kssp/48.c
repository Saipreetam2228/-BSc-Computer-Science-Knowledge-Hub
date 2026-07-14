//avg of array
#include <stdio.h>
int main()
{
  int i=0, n=200,m=0;
  float avg=0.0, sum=0.0;
  int k[200]={};
  printf("Enter no. of no.'s :");
  scanf("%d",&m);
  printf("!!Enter the no.'s to find avg!!\n");
  for(i=0; i<m; i++)
  {
    scanf("%d",&k[i]);
    sum=sum+k[i];
  }
  avg=sum/m;
  printf("!!The avg of the array entered is %f\n!!",avg);
}
