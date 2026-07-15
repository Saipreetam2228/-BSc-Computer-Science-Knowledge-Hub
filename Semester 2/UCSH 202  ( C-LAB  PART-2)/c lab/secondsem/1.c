//Menu driven program to compute add,sub,mul,div of 2complex numbers;
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
struct complex add(struct complex c1, struct complex c2)
{
  struct complex ans={0.0, 0.0};
  ans.re=c1.re+c2.re;
  ans.im=c1.im+c2.im;
  return(ans);
}
struct complex sub(struct complex c1, struct complex c2)
{
  struct complex ans={0.0, 0.0};
  ans.re=c1.re-c2.re;
  ans.im=c1.im-c2.im;
  return(ans);
}
struct complex mul(struct complex c1, struct complex c2)
{
  struct complex ans={0.0, 0.0};
  ans.re=(c1.re*c2.re)-(c1.im*c2.im);
  ans.im=(c1.im*c2.re)+(c1.re*c2.im);
  return(ans);
}
struct complex conjugate(struct complex c)
{
  struct complex ans={0.0, 0.0};
  ans.re=c.re;
  ans.im=-c.im;
  return(ans);
}

struct complex div(struct complex c1, struct complex c2)
{
  struct complex ans={0.0,0.0}, c3={0.0,0.0};
  c3=mul(c2,conjugate(c2));
  ans=mul(c1,conjugate(c2));
  ans.re=ans.re/c3.re;
  ans.im=ans.im/c3.re;
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
  printf("                !!Enter Your Choice!!           \n");
  printf("++++1>Addition of the complex numbers entered++++\n");
  printf("----2>Subtraction of the complex numbers entered----\n");
  printf("xxxx3>Multiplication of the complex numbers enteredxxxx\n");
  printf("////4>Division of the complex numbers entered////\n");
  //printf("%f + %f", a.re, a.im);
  //print(a);
  //print(b);
  scanf("%d",&i);
  if(i==1)
  {
    c=add(a,b);
    printf("The addition of the entered complex numbers :");
    print(c);
  }
  if(i==2)
  {
    c=sub(a,b);
    printf("The subtraction of the entered complex numbers :");
    print(c);
  }
  if(i==3)
  {
    c=mul(a,b);
    printf("The multilpication of the entered complex numbers :");
    print(c);
  } 
  if(i==4)
  {
    c=div(a,b);
    printf("The division of the entered complex numbers :");
    print(c);
  }
}


