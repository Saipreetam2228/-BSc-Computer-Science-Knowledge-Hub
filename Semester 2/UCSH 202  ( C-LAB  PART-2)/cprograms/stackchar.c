#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

struct node
{
    int v;
    struct node*n;
}

int main()
{
    struct node*t=NULL;
    char postfix[100]="";
    int i=0,r=0,l=0;
    printf("enter expression:\n");
    scanf("99%s",postfix);

    while(postfix[i]!='\0')
    {
        if(isdigit(postfix[i]))
          st=push(st,ctoi(postfix[i]));
        else if(isoperator(postfix[i]))
        {
            if(isempty(st))
            {
                printf("error/stack underflow\n");
                return(1);
            }
            r=pop(&st);
            if(isempty(st))
            {
                printf("stack empty\n");
                return(1);
            }
            l=pop(&st);
            st=push(st,operator(l,r,postfix[i]));
        }
        else
        {
            printf("unknown symbol\n");
            clearstack(st);
            return(1);
        }
        i=i+1;
    }


    if(isempty(st))
    {
        printf("error\n");
        return(1);
    }
    r=pop(&st);
    if(!isempty(st))
    {
        printf("error\n");
        return(1);
    }
    printf('result;%d\n',r);

}