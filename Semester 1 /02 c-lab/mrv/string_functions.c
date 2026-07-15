#include <stdio.h>

int length(char abc[])
{
  int i= 0;
  while(abc[i] != '\0')
    i= i+1;
  return(i);
}

int num_words(char abc[])
{
 int i=0,count=0;
 while(abc[i] != '\0')
 {
  if(abc[i] == ' ')
    count=count+1;
  i=i+1;
 }
 return count+1;
}

int num_lines(char abc[])
{
 int i=0,count=0;
 while(abc[i] != '\0')
 {
  if(abc[i] == '\n')
    count=count+1;
  i=i+1;
 }
 return count+1;

}

int num_vowels(char abc[])
{
 int i=0,count=0;
 while(abc[i] != '\0')
 {
  if(abc[i] == 'a' || abc[i] == 'e' || abc[i] == 'i' || abc[i] == 'o' || abc[i] == 'u' || abc[i] == 'A' || abc[i] == 'E' || abc[i] == 'I' || abc[i] == 'O' || abc[i] == 'U')
    count=count+1;
  i=i+1;
 }
 return count;

}

int num_consonants(char abc[])
{
 int i=0,count=0;
 while(abc[i] != '\0')
 {
  if(abc[i] != 'a' && abc[i] != 'e' && abc[i] != 'i' && abc[i] != 'o' && abc[i] != 'u' && abc[i] != 'A' && abc[i] != 'E' && abc[i] != 'I' && abc[i] != 'O' && abc[i] != 'U' && ((abc[i]>=65 && abc[i]<=90) || (abc[i] >=97 && abc[i]<=122)))
    count=count+1;
  i=i+1;
 }
 return count;
}

void changecase(char abc[])
{
  printf("\n");
  printf("Let's change CAPS to small and viceversa: \n");
  int i=0,count=0;
 while(abc[i] != '\0')
 {
  if(abc[i]>=65 && abc[i]<=90) 
    {
     printf("%c",abc[i]+32);
    }
  else
   if(abc[i] >=97 && abc[i]<=122) 
    {
     printf("%c",abc[i]-32);
    }
   else
     printf("%c",abc[i]);
   
  i=i+1;
 }
 printf("\n");
}


int main()
{
  char d[1000]= "";
  printf("Enter a string (type $ to end inputs): ");
  scanf("%[^$]s",d);
  //scanf("%9[^$]s",d);
  //scanf("%9[^9]s",d);
  printf("You entered: %s",d);
  printf("\nNumber of characters in your string: %d\n",length(d));
  printf("Number of words in your string: %d\n",num_words(d));
  printf("Number of lines in your string: %d\n",num_lines(d));
  printf("Number of vowels in your string: %d\n",num_vowels(d));
  printf("Number of consonants in your string: %d\n",num_consonants(d));
  changecase(d);
} 
