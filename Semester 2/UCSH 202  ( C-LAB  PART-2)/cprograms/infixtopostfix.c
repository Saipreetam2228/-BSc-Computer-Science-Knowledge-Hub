#include"stack.h"

bool isoperator(char c)
{
    return(c=='+'||c=='-'||c=='*'||c=='/');
}

bool isDigit(char c)
{
   return(c>='0' && c<='9');   
}

int priority(char c)
{
    switch (c)
    {
        case '+':
          return(1);
        case '-':
          return(1);
        case '*':
          return(2);
        case '/':
          return(2);
        case '(':
          return(0);
        default:
          return(0);
    }
}

int main()
{
    char infix[100]=" ";
    char postfix[100]=" ";
    struct node * st= NULL;
    int pos=0,i=0;
   
    while(infix[i])
    {
        if(isDigit(infix[i]))
        {
            postfix[pos]=infix[i];
            pos=pos+1;
        }
        else if(infix[i]=='(')
        {
            st=push(st,infix[i]);
        }
        else if(isoperator(infix[i]))
        {
            while(!isempty(st)&& priority(infix[i])<= priority(top(st)))
            {
                postfix[pos]=pop(&st);
                pos++;
            }
            st=push(st,infix[i]);
        }
        else if(infix[i]==')')
        {
            while(top(st)!='(')
            {
                postfix[pos]=pop(&st);
                pos=pos+1;
            }
            pop(&st);
        }
        i++;
    }
    while(! isempty(st))
    {
        postfix[pos]=pop(&st);
        pos=pos+1;
    }
    postfix[pos]=0;
    printf("%s\n",postfix);
}




