struct node*find(struct node*h,int x)
{
    if(h==NULL)
      return(NULL);
    while(h!=NULL)
    {
        if(h->val==x)
          return(h);
        h=h->next;
    }
    return(NULL);
}