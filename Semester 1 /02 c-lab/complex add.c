#include <stdio.h>

struct complex add(struct complex,struct complex);

struct complex
{
  float real,img;
};

void print(struct complex p)
{
  printf("%f+%fi\n", p.real, p.img);
};

int main()
{
  struct complex a={2.0,3.0},b={4.0,5.0},c={0.0,0.0};
  c=add(a,b);
  print(c);
  
  return (0);
}
struct complex add(struct complex c1,struct complex c2)
{
  struct complex ans={0.0,0.0};
  ans.real=c1.real+c2.real;
  ans.img=c1.img+c2.img;
  
  return (ans);
}
