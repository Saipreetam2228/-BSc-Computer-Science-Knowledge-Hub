//inserting before
struct node* insertbefore (struct node*h,int v)
{
    struct node*t=NULL;
    if(h==NULL)
    {
        printf("empty list\n")
        return(NULL);
    }
    if(h->val==k)
    {
        n=creatrnode(x);
        n->next=h;
        return(n);
    }
    t=findprev(h,k);
    if(t==NULL)
    {
        printf("%d not found\n",k);
        return(h);
    }
    n=createnode(x);
    n->next=t->next;
    t->next=n;
    return(h);
}