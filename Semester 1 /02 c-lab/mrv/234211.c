#include <stdio.h>

int length(char arr[])
{
  int i= 0;
  while(arr[i] != 0)
    i= i+1;
  return(i);
}

//Your code here - to check if x and y are anagrams of each other.
int anagram(char x[], char y[])
{
  int xlen= 0, ylen= 0, i= 0,check= 0,j= 0,extra=0;
  xlen= length(x);
  ylen= length(y);
  if (xlen!=ylen)
    return 0;
  else
  {
   while (i<=xlen-1)
    {
     check=x[i];
     j=0;
     while (j<=ylen-1)
       {
        if(check==y[j])
         { extra=y[j];
          y[j]=0;}      
        j=j+1;
       }
     if(extra!=check)
       return 0;
     i=i+1;
    }
    return 1; 
  }
  
}

//No changes in main
int main()
{
  char a[100]= "", b[100]= "";
  int k= 0;
  printf("Enter two strings (only lower case, separated by a space): ");
  scanf("%s %s",a,b);
  k= anagram(a,b);
    if(k == 1)
    printf("%s and %s are anagrams of each other\n",a,b);
  else
    printf("%s and %s are *NOT* anagrams of each other\n",a,b);
}
