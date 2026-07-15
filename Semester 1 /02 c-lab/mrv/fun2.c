#include <stdio.h>
int main()
{
  int  n=0,m=0,i ;
  
 printf("Let's set a lock screen pin\n");
 printf("Enter your PIN: ");
 scanf("%d",&n);
 
 printf("Enter your PIN again: ");
 scanf("%d",&m);
 
 while(m!=n)
  {
   printf("\n\nPasswords do not match\nEnter your PIN again: ");
   scanf("%d",&m);
  }
 printf("Password changed successfully!\n");
 printf("\nEnter your password ");
 scanf("%d",&m);
 i=1;
 while(m!=n)
  {
   printf("\n\nWrong password\nEnter your PIN again: ");
   scanf("%d",&m);
   i=i+1;//printf("!\n");
   if(i>3)
   break;
  }
 if(i>3)
  while(i>3)
  printf("\n ERROR☠️  Phone locked!!💀️   Press ctrl+c to abort\n");
 else
  printf("Opened!😉️\n");
}
 
  
 
 
  

