#include <stdio.h>
#include <stdlib.h>
struct node
{
  int n;
  struct node *p;
};
void print(struct node a)
{
  printf("value= %d & addrr = %d\n",a.n,a.p);
}

int main()
{
  struct node *h=NULL;
  h=(struct node*)malloc(sizeof(struct node)); //first address (1st coach address (key)
  printf("%d-addrr of h.\n",h);
  h->n=143; //1st coach value
  h->p=(struct node*)malloc(sizeof(struct node));//2nd coach address in 1st coach key holder
  print(*h);
  h->p->n=144;//2nd coch value
  h->p->p=(struct node*)malloc(sizeof(struct node));//3rd coach address with 2nd coach key holder.
  print(*(h->p));
  h->p->p->n=145;
  h->p->p->p=NULL;
  //(struct node*)malloc(sizeof(struct node));//4th coach address with 3rd coach key holder  
  // insted of assigning new address if we assign or allocate null, it mens it's the last on ein the linked list.
  print(*(h->p->p));
  while (h!=NULL)
  {
    printf("%d\n",h->n);
    h=h->p;
  }

}
