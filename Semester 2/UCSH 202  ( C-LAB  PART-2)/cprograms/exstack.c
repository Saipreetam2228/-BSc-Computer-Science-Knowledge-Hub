struct node
{
    int val;
    struct node*next;
};

struct node*createnode(int v)
{
    struct node*n=0;
    n=(struct node*)malloc(sizeof(struct node));
    n->val=v;
    n->next=0;
    return(n);
}

push(struct node*s,int v)
{
    struct node*n=0;
    n=createnode(v);
    n->next=s;
    return(n);
}
int pop(struct node**s)
{
    struct node*t=0;
    int x=0;
    if((*s)==0)
    {
        printf("stck underflow\n");
        return(0);
    }
    x=(*s)->val;
    t=*s;
    *s=(*s)->next;
    free(t);
    return(x);
}

int top(struct node*s)
{
    if(!isempty(s))
      return(s->val);
    return(0);
}

boolisfull(struct node *s)
{
    struct node*n=0;
    n=createnode(0);
    if(n==0)
      return('true');
    free(n);
    return('false');
}

int main()
{
    struct node*st=0;
    int k=0;
    st=push(st,3);
    st=push(st,5);
    st=push(st,53);
    st=push(st,2);
    k=pop(&st);

    while(st!=0)
    {
        k=pop(&st);
        printf("%d\n",k);
    }
}