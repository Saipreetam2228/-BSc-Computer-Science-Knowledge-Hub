  #include<stdio.h>
  #include<stdlib.h>

  struct node
  {
    int key;
    struct node*left,*right;
    int height;
  };

  int getheight(struct node*n)
  {
    if(n==NULL)
      return 0;
    return n->height;
  }

  struct node*createnode(int key)
  {
    struct node*node=(struct node*)malloc(sizeof(struct node));
    node->key=key;
    node->left=node->right=NULL;
    node->height=-1;
    return(node);
  }

  int max(int a,int b)
  {
    return (a>b?a:b);
  }
  int getbalancefactor(struct node*n)
  {
    if(n==NULL)
      return 0;
    return(getheight(n->left)-getheight(n->right));
  }

  struct node*rightrotate(struct node*y)
  {
     struct node*x=y->left;
     struct node*t2=x->right;

     x->right=y;
     y->left=t2;

     y->height=max(getheight(y->right),getheight(y->left))+1;
     x->height=max(getheight(x->right),getheight(x->left))+1;

    return x;
  }

   struct node*leftrotate(struct node*x)
  {
     struct node*y=x->right;
     struct node*t2=y->left;

     y->left=x;
     x->right=t2; 

     y->height=max(getheight(y->right),getheight(y->left))+1;
     x->height=max(getheight(x->right),getheight(x->left))+1;

    return y;
  }


  struct node*insert(struct node*node,int key)
  {
    if(node==NULL)
      return(createnode(key));
    if(key < node->key )
      node->left=insert(node->left,key);
    else if(key>node->key)
      node->right=insert(node->right,key);
      return(node);
    
    node->height=1+max(getheight(node->left),getheight(node->right));
    int bf=getbalancefactor(node);

    //left left case      --right rotation 
      if(bf>1 &&key  <node->left->key)
        return( rightrotate(node));
    //left right case     --left rotation on left child then right rotation 
      if(bf>1 && key >node->left->key)
      {
        node->left=leftrotate(node->left);
       return( rightrotate(node));
      }
    //right left case     --right rotation on right child then left rotation 
      if(bf<-1 && key > node->right->key)
      {
        node->right=rightrotate(node->right);
       return (leftrotate(node));
      }
    //right right case    --left rotation
       if(bf<-1 && key >node->right->key)
         return( leftrotate(node));
       
       return(node);
  }

void preorder(struct node*root)
{
  if (root!=NULL)
  {
    printf("%d",root->key);
    preorder(root->left);
    preorder(root->right);
  }
}


int main()
{
  struct node*root=NULL;
  root=createnode(0);
  root=insert(root,1);
  root=insert(root,2);
  root=insert(root,4);
  root=insert(root,3);
  root=insert(root,6);
  preorder(root);
  return 0;
}