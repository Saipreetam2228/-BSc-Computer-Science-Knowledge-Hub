#include<stdio.h>

void fun();

int main()
{
  fun();
  printf("sairam\n");
}

void fun()
{
  fun();  // magic   infinite function , segmentation core dump
  printf("sairam\n");
}
