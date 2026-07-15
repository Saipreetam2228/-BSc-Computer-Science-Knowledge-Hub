//structure for division of complex numbeers
#include <stdio.h>
struct complex
{
  float re;
  float im;
};

void print(struct complex c)
{
  printf("%f + %fi \n",c.re,c.im);
}

struct complex div(struct complex c1, struct complex c2)
{
  struct complex ans={0.0,0.0}, c3={0.0,0.0};
  ans.re=(c1.re*c2.re+c1.im*c2.im)/((c2.re*c2.re)+(c2.im*c2.im));
  ans.im=(c1.im*c2.re-(c1.re*c2.im))/((c2.re*c2.re)+(c2.im*c2.im));
  return(ans);
}
int main()
{
  int i=0,t=0;
  struct complex a={0.0}, b={0.0,0.0},c;
  printf("Enter Two Complex numbers(real,imaginary):\n");
  scanf("%f",&a.re);
  scanf("%f",&a.im);
  scanf("%f",&b.re);
  scanf("%f",&b.im);
  b.im=-b.im;
  c=div(a,b);
  print(c);
}
