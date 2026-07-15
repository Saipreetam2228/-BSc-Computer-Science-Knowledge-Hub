//The quickbrown fox jumps over the lazy dog. The quick brown fox jumps over the lazy dog. The quick brown fox jumps over the lazy dog. The quick brown fox jumps over the lazy dog. The quick brown fox    jumps over the lazy dog. The quick brown fox jumps over the lazy dog. The quick brown fox jumps over the lazy dog. The quick brown fox jumps over the lazy dog. The quick brown fox jumps over the lazy dog.
#include <stdio.h>

int length(char arr[])
{
  int i= 0;
  while(arr[i] != 0)
    i= i+1;
  return(i);
}

int main()
{
  char str[1000]= "";
  int len= 0, i= 0, n= 6, j= 0,x=0, k= 0,c=0, count= 0;
  printf("Enter a string: ");
  scanf("%999[^$]s",str);
  len= length(str);
  //printf("You entered: %s", str);
  while(k+n-1 < len)
  {
    if(str[k+n-1] == ' ')
    {
      for(i= k; i < k+n-1; i= i+1)
        printf("%c",str[i]);
    }
    else
    {
      i= k+n-1;
      while(str[i] != ' ')
       {
        i= i-1;
        count=count+1;
       }
      for(j= k; j < i; j= j+1)
         if (str[j]== ' ')
          c=c+1;
      if (c>0)
       x=count/c;
      for(j= k; j < i; j= j+1)
        {
         //if (str[j]== ' ')  
          // while(x>0) 
            { 
             //printf("%c",' ');
            // x=x-1;
            }
          printf("%c",str[j]);
         }
    printf("\n");
    k= i + 1;
  }
  }
  for(i= k; i < len; i= i+1)
    printf("%c",str[i]);
  printf("\n");
}
