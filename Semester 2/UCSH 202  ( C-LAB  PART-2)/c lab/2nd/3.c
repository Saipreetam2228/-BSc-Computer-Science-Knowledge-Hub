//structure for calculating money
#include <stdio.h>
struct money
{
  int ru;
  int pi;
};

void print(struct money r)
{
  printf("%d.%d \n",r.ru,r.pi);
}

struct money add(struct money r1, struct money r2)
{
  int rem=0,rup=0;
  struct money ans={0,0};
  ans.ru=r1.ru+r2.ru;
  ans.pi=r1.pi+r2.pi;
  if(ans.pi>=100)
    {
      while(ans.pi>100)
      {
       rup=ans.pi/100;
       ans.pi=ans.pi%100;
      }
    }
  ans.ru=ans.ru+rup;  
  return(ans);
}
int main()
{
  int i=0,t=0;
  struct money a={0}, b={0,0},c;
  printf("Enter Money you had(rupees,paise):\n");
  scanf("%d",&a.ru);
  scanf("%d",&a.pi);
  printf("Enter Money your friend had(rupees,paise):\n");
  scanf("%d",&b.ru);
  scanf("%d",&b.pi);
  c=add(a,b);
  printf("Money u both have:");
  print(c);
}
