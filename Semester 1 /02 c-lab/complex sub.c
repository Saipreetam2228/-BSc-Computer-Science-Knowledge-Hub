# include<stdio.h>

struct complex;
{
    float real,img;
}

int main()
{
    struct complex a={5.0,6.0} b={7.0,8.0},c={0.0,0.0};
    c=sub(a,b);
    print(c);
}
struct complex sub(struct complex c1,struct complex c2);
{
   struct complex ans={0.0,0.0};
   ans.real=c1.real-c2.real;
   ans.img=c1.img-c2.img;
   return(ans);
}
void print(struct complex p);
{
    printf("%f+%fi\n",p.real,p.img);
}