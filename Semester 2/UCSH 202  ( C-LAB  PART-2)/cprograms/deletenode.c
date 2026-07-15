
struct node*deletenode(struct node*h,int x)
{
  struct node*t=NULL,*p=h;
  if(h==NULL)
  {
    printf("empty list\n");
    return(NULL);
  }
  if(h->val==x)
  {
    t=h->next;
    free(h);
    return(t);
  }
  while(h->next!=NULL && h->next->val!=x)
    h=h->next;
  
  if(h->next!NULL)
  {
    t=h->next->next;
    free(h->next);
    h->next=t;
  }
  else
    prinf("%d not found\n");
  return(p);
}