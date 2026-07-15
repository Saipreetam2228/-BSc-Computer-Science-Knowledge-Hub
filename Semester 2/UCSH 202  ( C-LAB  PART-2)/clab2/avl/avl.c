#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node*l,*r;
    int h;
};

int height(struct node* root)
{
    if(root==NULL)
      return(-1);
    return(root->h);
}

int max(int x,int y)
{
    if(x>y)
      return(x);
    return(y);  
}

struct node*createnode(int v)
{
    struct node*n=NULL;
    n=(struct node*)malloc(sizeof(struct node));
    n->val=v;
    n->l=n->r=NULL;
    n->h=0;
    return(n);
}

//rotations

//right rotation 
struct node*rightrotate(struct node*root)
{    //assume root->l exist
    struct node*t=NULL,*p=NULL;
    t=root->l->r;
    root->l->r=root;
    p=root->l;
    root->l=t;
    root->h=max(height(root->l),height(root->r))+1;
    p->h=max(height(p->l),height(p->r))+1;
    return(p);
}

//left rotaion
struct nod*leftrotate(struct node*root)
{
    struct node*t=NULL,*p=NULL;
    t=root->r->l;
    p=root->r;
    p->l=root;
    root->r=t;
    root->h=max(height(root->l),height(root->r))+1;
    p->h=max(height(p->l),height(p->r))+1;
    return(p);
}

//left right rotate
struct node*lrrotate(struct node*root)
{
   //first perform lef rotate on the left child,
   //followed by right rotate on the node of imbalance

   root->l=leftrotate(root->l);   
   return(rightrotate(root));
}

//right left roatate
struct node*rlrotate(struct node* root)
{
  //first perform right rotation on the right child
  //followed by a left rotation on the root

  root->r=rightrotate(root->r);
  return(leftrotate(root));
}

struct node*insert(struct node*root,int v)
{
    if(root==NULL)
      return(createnode(v));
    if(v<root->val)
    {
        root->l=insert(root->l,v);
        if((height(root->l)-height(root->r))==2)
        {
            if(v<root->l->val)
              return(rightrotate(root));
            else if(v>root->l->val)
              return(lrrotate(root));
        }
    }
    else if(v>root->val)
    {
        root->r=insert(root->r,v);
        if((height(root->r)-height(root->l))==2)
        {
            if(v>root->r->val)
              return(leftrotate(root));
            else if(v<root->r->val)
              return(rlrotate(root));
        }
    }
}

//delete a paritcular node
struct node*deletenode(struct node*root,int x)
{
  struct node*t=NULL;
  if(root==NULL)
    return(NULL);
  if(x<root->val)
    root->l=deletenode(root->l,x);
  else if(x>root->val)
    root->r=deletenode(root->r,x);
  else //root->val==x
  {
    if(root->l==NULL && root->r==NULL)
    {
      free(root);
      return(NULL);
    }
    if(root->l!=NULL && root->r==NULL)
    {
      t=root->l;
      free(root);
      return(t);
    } 
    if(root->r!=NULL && root->l==NULL)
    {
      t=root->r;
      free(root);
      return(t);
    }
    t=min(root->r);
    root->val=t->val;
    root->r=deletenode(root->r,t->val);
  }
  return(root);
}

struct node*delete(struct node*root,int x)
{
  struct node*t=NULL;
  if(root==NULL)
   return(NULL);
  if(x<root->val)
  {
    root->l=delete(root->l,x);
    if(height(root->r)-height(root->l)==2)//rs??
    {
      if(height(root->r->r)>=height(root->r->l))//rsrh
        return(leftrotate(root));
      else
        return(rlrotate(root));
    }
  }
  else if(x>root->val)
  {
    root->r=delete(root->r,x);
    if(height(root->l)-height(root->r)==2)
    {
      if(height(root->l->l)>=height(root->l->r))//lslh
        return(rightrotate(root));
      else //lsrh
        return(lrrotate(root));
    }
  }
  else //root->val==x
  {
    
    if(root->l==NULL && root->r==NULL)
    {
      free(root);
      return(NULL);
    }
    if(root->l!=NULL && root->r==NULL)
    {
      t=root->l;
      free(root);
      return(t);
    } 
    if(root->r!=NULL && root->l==NULL)
    {
      t=root->r;
      free(root);
      return(t);
    }
    t=min(root->r);
    root->val=t->val;
    root->r=deletenode(root->r,t->val);
  }
  return(root);
  root->h=max(height(root->l),height(root->r))+1;
  return(root);
}





int main()
{
    struct node*root=NULL;
    root=createnode(4);
    root=insert(root,5);
    root=insert(root,4);
    root=insert(root,8);
    root=insert(root,0);
    root=insert(root,7);

}