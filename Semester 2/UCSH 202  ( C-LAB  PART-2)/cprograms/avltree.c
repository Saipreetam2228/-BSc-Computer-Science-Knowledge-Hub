struct node
{
    int val;
    struct node*l,*r;
    int h;
};

int height(struct node *root)
{
    if(root ==NULL )
      return(-1);
    return(root->h);  
}

int max(int x,int y)
{
   if(x > y)
      return(x);
   return(y);
}

struct node*createnode(int v)
{
    struct node *n=NULL;
    n=(struct node*)malloc(sizof(struct node));
    n->val=v;
    n->l=NULL;
    n->r=NULL;
    n->h=0;
    return(n);
}

struct node*insert(struct node*root,int v)
{
    if(root == NULL)
     return(createnode(v));
    if(v<root->val)
    {
        root->l=insert(root->l.v);
        
    }
}