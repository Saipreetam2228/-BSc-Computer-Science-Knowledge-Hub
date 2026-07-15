#include <stdio.h>

void fun(int);  //6 void function 

int main()
{
  int i=4;
  fun(i+2); //3 call function -----we can keep like expressions, variables,direct values and so many
  printf("from main %d\n",i);
  fun(i+5); //3 call function  ----
}
void fun(int i) //2 function defenition
{
  i=i+1;  //4 parameters passing   ---
  printf("sairam %d\n",i);
}


// 1 function declaration
// 2 function defenition
// 3 call function
// 4 parameters passing
// 5 lacal variables
// 6 array
// 7 magic

//flow of execution 7*8*14*15*9*7*10*14*15
