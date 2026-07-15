void insertlast(struct node*h,int v)
{
    struct node*n=NULL,*t=NULL;
    n=createnode(v);
    t=h;
    while(t!=NULL)
        t=t->next;
    t->next=n;
}