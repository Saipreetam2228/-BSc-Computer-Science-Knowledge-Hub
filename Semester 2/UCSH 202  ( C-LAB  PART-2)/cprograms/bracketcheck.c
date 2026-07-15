
#include "stack.h"

bool isopeningsymbol(char c)
{
    if(c=='(' || c=='{' || c=='[')
      return(true);
    return(false);
}
bool isclosingsymbol(char c)
{
    if(c==')' || c=='}' || c==']')
      return(true);
    return(false);
}

bool ispair(char a,char b)
{
    if((a=='(' && b==')')||(a=='['&& b==']')||(a=='{'&& b=='}'))
      return(true);
    return(false);
}

int main()
{
    int i=0;
    char x=0;
    struct node*st=NULL;
    char str[100]=" ";

    printf("enter your expression:");
    scanf("%99s",str);

    while(str[i]!=0)
    {
        if(isopeningsymbol(str[i]))
          st= push(st,str[i]);
        else if(isclosingsymbol(str[i]))
        {
            x=pop(&st);
            if(x==0 || !ispair(x,str[i]))
            {
                printf("imbalnce expression\n");
                clearstack(&st);
                return(0);
            }
        }
        i=i+1;
    }
    if(!isempty(st))
    {
        printf("imbalance exp ression\n");
        clearstack(&st);
        return(0);
    }
    else
    {
        printf("valid expression\n");
    }
}