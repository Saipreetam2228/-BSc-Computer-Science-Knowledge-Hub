//min of entered array
#include <stdio.h>
int main()
{
  int i=0, min=0, n=200,m=0;
  int k[200]={};
  printf("Enter no. of no.'s :");
  scanf("%d",&m);
  printf("!!Enter the values to find min!!\n");
  for (i=0; i<m; i++)
    scanf("%d",&k[i]);
  min=k[0];
  for(i=1; i<m; i++)
  {
    if(k[i]<min)
      min=k[i];
  }
  printf("!!The min of the entered no.'s is %d !!\n",min);
}
