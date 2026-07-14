// function factorial 
# include<stdio.h>

int factorial(int n)
{
  int fact=1,i=1;
  while(i<=n)
  {
    fact=fact*i;
    i=i+1;  
  }
  return fact;
}

int main()
{
  int n,ans;
  
    printf("enter value: ");
    scanf("%d",&n);

    ans=factorial(n);
    printf("factorial of the value %d! is = %d\n",n,ans);
   
}
