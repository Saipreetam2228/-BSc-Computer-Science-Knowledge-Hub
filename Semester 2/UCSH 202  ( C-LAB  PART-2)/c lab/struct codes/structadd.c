#include<stdio.h>
struct joke
{
 int re , im;
};

struct joke add (struct joke c1 , struct joke c2)
{
 struct joke ans={0.0,0.0};
 ans.re= c1.re + c2.re;
 ans.im= c1.im + c2.im;
 return(ans);
}

void print(struct joke c)
{
 printf("%d + %di\n",c.re , c.im);
}

int main()
{
 struct joke a={0.0,0.0} , b={0.0,0.0},c={0.0,0.0};
 printf("Enter a.re and a.im and b.re and b.im :");
 scanf("%d %d %d %d",&a.re ,&a.im ,&b.re ,&b.im);	
 c=add(a,b);
 print(c);
};
