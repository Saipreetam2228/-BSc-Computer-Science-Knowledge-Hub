#include <stdio.h>
void game(int m);
int length(char arr[])
{
  int i= 0;
  while(arr[i] != 0)
    i= i+1;
  return(i);
}
int main()
{
 game(5);
}

void game(int m)
{
 int n=0,x=0,i=0;
 char arr[100]={},choice=0,other=0;
 n=m;
 printf("Let's play a game:   (press enter to continue)");
 scanf("%c",&choice);
 while(choice!='\n')
  { 
   printf("press enter to continue!");
   scanf("%c",&choice); 
  }
 choice=0;
   
 printf("select a 2 or >digit number.");
 scanf("%d",&n);
 
 i=0;
 printf("We will count upto %d one by one.\nThe one who reaches %d first is the winner! you can select one from x concecutive numbes from the current number.\nEg. if x is 2 and i start the game with 1, then you can choose 2 or 3 as your choice.",n,n);
 
 
 printf("\nEnter (x) how many concecutive numbers are available to   choose. ");
 scanf("%d",&x);
 printf("who starts first? 'u' or 'i' ");
 
// while()
 
 
 
}
