//finding previous
//assuming x is not the first value
struct node
{
  int val;
  struct node*next;
};

struct node*createnode(struct node*h)
{
  struct node*n=NULL;
  n=(struct node*)mlloc(sizeof(struct node));
  n->val=v;
  n->next=NULL;
  return(n);
}

struct node*findprev(struct node*h,int x)
{
    if(h==NULL)
    {
        printf("%d not found\n");
        return(NULL);
    }
     while(h->next!=NULL)
     {
        if(h->next->val==x)
          return(NULL);
        h=h->next;
     }
     return(NULL);
}