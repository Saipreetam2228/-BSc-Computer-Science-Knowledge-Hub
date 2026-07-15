#include<stdio.h>
struct time 
{
 int h , min , sec;
};

struct  time ans1(struct time a , struct time  b)
{
 struct time ans={0.0,0.0,0.0};	
 ans.h= a.h + b.h;
 ans.min= a.min + b.min;
 ans.sec= a.sec + b.sec;
 while(ans.sec > 60)
 {
   ans.sec= ans.sec - 60;
   ans.min=ans.min + 1;
 }
 while(ans.min > 60)
 {
   ans.min=ans.min + 1;
   ans.h=ans.h + 1; 
 }
 return(ans);
};

void print(struct time c)
{
 printf("%d %d %d\n",c.h,c.min,c.sec);
}

int main()
{
  struct time a={0.0,0.0,0.0}, b={0.0,0.0,0.0}, c={0.0,0.0,0.0};
  printf("Enter a.h and b.h:");
  scanf("%d %d",&a.h,&b.h);
  printf("Enter a.min and b.min:");
  scanf("%d %d",&a.min,&b.min);
  printf("Ente a.sec and b.sec:");
  scanf("%d %d",&a.sec,&b.sec);
  c=ans1(a,b);
  print(c);
}
