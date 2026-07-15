struct node*insertfirst(struct node*h,int v)
{
    struct node*n=NULL;
    n=createnode(v);
    n->next=h;
    return(n);
}