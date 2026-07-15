#include <stdio.h>
struct time
{
  int min;
  int sec;
};

void print(struct time t)
{
  printf("%dmins %dsecs \n",t.min,t.sec);
}

struct time add(struct time t1, struct time t2)
{
  int rem=0,tim=0;
  struct time ans={0,0};
  ans.min=t1.min+t2.min;
  ans.sec=t1.sec+t2.sec;
  if(ans.sec>=60)
    {
      while(ans.sec>60)
      {
       tim=ans.sec/60;
       ans.sec=ans.sec%60;
      }
    }
  ans.min=ans.min+tim;  
  return(ans);
}
int main()
{
  int i=0,t=0;
  struct time a={0}, b={0},c;
  printf("Enter time you spent for one program(mins,secs):\n");
  scanf("%d",&a.min);
  scanf("%d",&a.sec);
  printf("Enter time you spent for another program(mins,secs):\n");
  scanf("%d",&b.min);
  scanf("%d",&b.sec);
  c=add(a,b);
  printf("Time u spent for both:");
  print(c);
}
