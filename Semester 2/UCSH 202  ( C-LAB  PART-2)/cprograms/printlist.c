void printlist(struct node*h)
{
  while(h!=NULL)
  {
    prinf("%d\n",h->val);
    h=h->next;
  }
}