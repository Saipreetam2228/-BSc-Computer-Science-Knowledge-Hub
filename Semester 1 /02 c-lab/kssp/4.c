//Marks of 3 students
#include <stdio.h>
int main()
{
  int m1=0, m2=0, m3=0 avg=0 tot=0;
  printf("-----Enter the Marks-----");
  printf("Subject 1:");
  scanf("%d",m1);
  printf("Subject 2:");
  scanf("%d",m2);
  printf("Subject 3:");
  scanf("%d",m3);
  tot=m1+m2+m3;
  printf("Total marks obtained:%d\n",tot);
  avg=tot/3;
  printf("Percentage obtained:%d\n",avg);
}
