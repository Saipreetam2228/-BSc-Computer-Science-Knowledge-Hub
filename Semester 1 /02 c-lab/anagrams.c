
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
  int xlen= 0, ylen= 0, i= 0,j=0, k=0; //taking extra valriables j as 0.
  xlen= length(x);
  ylen= length(y);
  char a[100]={},b[100]={}; //we are stooring the inputs x and y
  
  if (xlen==ylen)
  {
    while(b[j]!=0) //we are tracking till x and y are not null
    {
      i= 0;
      while(a[i]!=0)
      {
        if(a[i]==b[j])
          k=k+1;
        i= i+1;
      }
      j= j+1;
    }
    printf("Number of matches= %d\n",k);
    if(k == xlen)
      return(1);    //if both the word are equal return 1 to  x
    else
      return(0);
  } 
  else
    return (0);  //if both the word are not  equal return 0 to  x
}


//No changes in main
int main()
{
  char a[100]= "", b[100]= "";
  int k= 0;
  printf("Enter two strings (only lower case, separated by a space): ");
  scanf("%s %s",a,b);
  k= anagram(a,b);
  if(k == 1) //this part i didnt understand sir
    printf("%s and %s are anagrams of each other\n",a,b);
  else
    printf("%s and %s are *NOT* anagrams of each other\n",a,b);
}
