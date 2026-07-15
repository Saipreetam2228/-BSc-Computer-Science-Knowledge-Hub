//palindromic function
# include<stdio.h>
int main()
{
  int i,n,x,q,ans;
  i=1;
  ans=0;
  printf("enter q value: ");
  scanf("%d",&q);
  n=q;
  while(n>0)
  {
    x= n%10;
    ans=ans*10+x;
    n=n/10;
  }
  if (q==ans)
    printf("the number %d is palindromic function.😉️ \n",q);
  else
    printf("%d not a palindromic.🥵️ \n",q);
}
