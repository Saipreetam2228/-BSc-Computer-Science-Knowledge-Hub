#include<stdio.h>
#define MAX 80

struct qtype
{
    int q[MAX];
    int front;
    int rear;
};

qisfull(struct qtype queue)
{
    return(queue.rear==MAX-1);
}
qisempty(struct qtype queue)
{
    if(queue.front>queue.rear)
      return(1);
    else
      return(0);
}
makeqempty(struct qtype*queue)
{
    queue->front=0;
    queue->rear=-1;
}
addq(struct qtype*queue,int el)
{
    queue->rear++;
    queue->q[queue->rear]=el;
}
delq(struct qtype*queue,int *el)
{
  *el=queue->q[queue->front];
  if(queue->front==queue->rear)
    makeqempty(queue);
  else
    queue->front++;
}
qdisp(struct qtype queue)
{
    int i;
    if(qisempty(queue))
      printf("\n queue is empty");
    else
    {
        for(i=queue.front;i<=queue.rear;i++)
          printf("\n q[%d]\t%d",i,queue.q[i]);
    }
}

main()
{
    static struct qtype queue={{0},0,-1};
    int choice,el;
    for( ; ; )

   {
    printf("\n\t\t 1. Make queue empty    \n");
    printf("\n\t\t 2. Add element    \n");
    printf("\n\t\t 3. Delete element    \n");
    printf("\n\t\t 4. Display queue         \n");
    printf("\n\t\t 5. Exit program    \n");
    printf("\n choose option between 1 to 5 \n");

    choice=getch();
    if(choice=='5')
       break;
    switch(choice)
    {
        case '1':makeqempty(&queue);
              break;
        case'2':if(!isqfull(queue))
               {
                printf("element to add:\n");
                scanf("%d",&el);
                addq(&queue,el);
               }
                else
                   printf("\n q is full..\n");
                   break;
        case'3':if(!qisempty(queue))
                  delq(&queue,&el);
                else
                  printf("\nq is empty");
                  break;
        case'4':qdisp(queue);
                break;
    }
    fflush(stdin);
   }
}
