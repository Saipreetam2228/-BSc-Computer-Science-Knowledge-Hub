struct node*destroylist(struct node*h)
{
    struct node*p=NULL;
    while(h!=NULL)
    {
        p=h->next;
        free(h);
        h=p;
    }
    return(NULL);
}
