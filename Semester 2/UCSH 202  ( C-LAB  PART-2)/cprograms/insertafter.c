void insertafter(struct node *h,int k,int x)
{
    struct node*t=NULL,*n=NULL;
    t=find(h,k);
    if(t==NULL)
    {
        prinf("%d not found\n",k);
        return;
    }
    n=createnode(x);
    n->next=t->next;
    t->next=x;
}