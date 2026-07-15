# include<stdio.h>

int fun(int);
int main()
{
  int n=10,k=0;
  k=fun(n);
  printf("from no: %d\n",k);
}

int fun(int n)
{
  if (n==0)
    return(0);
  else
    return(n+ fun(n-1));
}
