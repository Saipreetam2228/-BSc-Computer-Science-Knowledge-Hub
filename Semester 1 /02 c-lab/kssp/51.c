//seive of errathosthenis
/*uncrossed =0, crossed=-1, ticked=1*/
#include <stdio.h>
int main()
{
  int i=0,k[999999]={},j=0, n=0;
  k[0]=1;
  k[1]=1;
  printf("Enter the N no.'s:");
  scanf("%d",&n);
  for (i=2;i<n;i++)
  {
     if(k[i]==0)
     {
       for(j=1; j<n; j++)
       {
         if(j==1)
           k[j]=1;
         else
           k[j]=-1;
       }
     }
     printf("The prime no.'s upto %d are.....",n);
     for(i=1;i<n;i++)
     {
        if(k[i]==1)
          printf("%d\n",i);    
     }
  }
}
