struct node*destroylist(struct node*h)
{
    struct node*t=NULL;
    if(h!=NULL)
    {
        destroylist(h->next);
        free(h);
    }
    return(NULL);
}