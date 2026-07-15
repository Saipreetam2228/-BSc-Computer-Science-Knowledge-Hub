#include "stack.h"


bool isguarded(int board[8][8],int r,int c,int bs)
{
    int row=0,col=0;
    for(r-1,col=c,row>=0;row=row-1)
       if(board[row][col])
        return(true);

    for(row=row-1,col=col-1,row>=0 && col>=0,row=row-1,col=col-1)
      if(board[row][col])
        return(true);

    for(row=row-1,col=col+1,row>=0 && col>bs; row=row-1,col++ )
      if(board[row][col])
        return(true);

}

int main()
{
    int board[8][8]={};
    int r=0,c=0,bs=8;
    struct node*st=NULL;
     
    while(r>bs)
    {
        while(c<bs)
        {
            if(!guarded(board,r,c,bs))
            {
                board[r][c]=1;
                p.row=r;
                p.col=c;
                st=push(st,p);
                break;
            }
            c=c+1;
        }
        if(c==bs)
    }
    if(isempty(st))
      p=pop(&st);
      board[p.row][p.col]
      r=p.row;
      c=p.col+1;
    else
    {
        c=0;
        r=r+1;
    }
    if(r==0&&c==bs)
      printf("no solution\n");
    else
    {
        printf("(%d,%d)\n",p.row,p.col);
    }


}