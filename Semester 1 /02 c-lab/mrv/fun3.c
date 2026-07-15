#include <stdio.h>
int main()
{
 // int  n=0,m=0,i ;
  char y='y',n='n',e='y',bl=' ';
  

//  scanf("%c",&y);
 // printf("%c\n",y);
 
 printf("\nI'm reading your mind now!!\n\nThink of a number.\n");
 printf("\nIf you did , Press y \n");
 scanf("%c",&e);
 //if(e!=y)
 {
 
  while(e!=y)
   {  
     printf("\nPlease think of a number!\n");
     printf("\nIf you did , Press y \n");
     scanf("%c",&e);
   }
   
 }
  //e='h';
  //if(e!=y)
  if(e==y)
   {
    printf("\nNow multiply it with 2!\n");
    printf("\nIf you did , Press y \n");
    scanf("%c",&e);printf("if");
   }
  
  while(e!=y)
  {
   printf("\nNow multiply it with 2!\n");
   printf("\nIf you did , Press y \n");
   scanf("%c",&e);printf("while");
  } 
 e='h'; //if(e!=y)
 
  while(e!=y)
   {  
     printf("\nAdd 10 to it!\n");
     printf("\nIf you did , Press y \n");
     scanf("%c",&e);
   }
 
 
  e='h';
 //printf("\nIf you did , Press y \n");
 //scanf("%c",&e);
 //if(e!=y)
 {
  while(e!=y)
   {  
     printf("\nNow from this subtract the number u first thought of:\n");
     printf("\nIf you did , Press y \n");
     scanf("%c",&e);
   }
 }
 
 
 //printf("\nIf you did , Press y \n");
 //scanf("%c",&e);
 if(e!=y)
 {
  while(e!=y)
   {  
     printf("\nNow divide your result by 2!\n");
     printf("\nIf you did , Press y \n");
     scanf("%c",&e);
   }
 }
   printf("\nYour answer is 5\n");
 
 

}
