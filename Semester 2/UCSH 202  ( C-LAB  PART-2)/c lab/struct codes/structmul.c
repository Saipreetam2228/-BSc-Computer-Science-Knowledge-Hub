#include<stdio.h>
struct com
{
 int re , im;
};

struct com mul(struct com c1 , struct com c2)
{
 struct com ans={0.0,0.0};
 ans.re= c1.re * c2.re + c1.im * c2.im;           
 ans.im= c1.im * c2.re + c1.re * c2.im;
 return(ans);
};

void print(struct com c)
{
 printf("%d + %di\n",c.re , c.im);
}

int main()
{
 struct com a={0.0,0.0} , b={0.0,0.0},c={0.0,0.0};
 printf("Enter a.re and a.im :");
 scanf("%d %d", &a.re, &a.im);
 printf("Enter  b.re and b.im:");
 scanf("%d %d" ,&b.re ,&b.im);
 c=mul(a,b);
 print(c);
};
