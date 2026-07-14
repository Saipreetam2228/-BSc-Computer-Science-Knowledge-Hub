//max of an array
#include <stdio.h>
int main()
{
  int i=0, max=0, n=200,m=0;
  int k[200]={};
  printf("Enter no. of no.'s :");
  scanf("%d",&m);
  printf("!!Enter the values to find max!!\n");
  for (i=0; i<m; i++)
    scanf("%d",&k[i]);
  max=k[0];
  for(i=1; i<m; i++)
  {
    if(k[i]>max)
      max=k[i];
  }
  printf("!!The max of the entered no.'s is %d !!",max);
}
