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
  int len= 0, i= 0, n= 40, j= 0, k= 0,count=0,c=0,x=0,y=0;
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
      count=0;
      while(str[i] != ' ')
        {
         i= i-1;
         count=count+1;
        }
        //printf("\n%d\n",count);
        c=0;
        for(j= k; j < i; j= j+1)
          if(str[j]==' ')
            {c=c+1;}//printf("\nc is %d\n",c);}
            
        x=0; 
        if(c!=0)
          x=count/c;
        y=0;
        if(count<c)
          y=1;
        
        else
        if (count%2==1)
          y=1;
        
        //  y=y+1;
        //printf("\n%d\n",y);
      for(j= k; j < i; j= j+1)
        { 
         x=count/c;
         printf("%c",str[j]);
         if(str[j]==' ')
           while(x>0)
             {
              while(y>0)
               {
                printf(" ");
                y=y-1;
               }
              x=x-1;
              printf(" ");
             }
        }
       //printf("  else");
    }
    printf("\n");
    k= i + 1;
  }
  for(i= k; i < len; i= i+1)
    printf("%c",str[i]);
  printf("\n");
  //printf("\n%d\n",count);
}
