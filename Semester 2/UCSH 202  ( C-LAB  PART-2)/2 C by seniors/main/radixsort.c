#include <stdio.h>
#include <stdlib.h>
struct node
{
	int val;
	struct node *next;
};
struct node * createnode(int);
struct node * insertlast(struct node *, int);
int main()
{
	int n=0,*arr=NULL;
	struct node *buckets[10]={},*t=NULL;
	int nd=0,max=0,i=0,j=0,d=0,k=0,p=1,min=0;
	printf("Enter the number of elements:");
	scanf("%d", &n);
	arr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d", arr+i);
	}
	for(i=0;i<n;i++)
		if(arr[i]<min)
			min=arr[i];
	//printf("%d is the MIN\n", min);
	for(i=0;i<n;i++)
		arr[i]-=min;
	max=arr[0];
	for(i=1;i<n;i++)
		if(arr[i]>max)
			max=arr[i];
	//printf("%d is the MAX\n", max+min);
	while(max>0)
	{
		nd+=1;
		max/=10;
	}
	//printf("%d is the number of phases\n", nd);
	for(i=0;i<nd;i++)
	{	
		k=0;
		//printf("%d is the value of P\n", p);
		for(j=0;j<n;j++)
		{
			d=(arr[j]/p)%10;
			buckets[d]=insertlast(buckets[d],arr[j]);
		}
		//printf("phase %d part 1 is complete\n",i);
		for(j=0;j<10;j++)
		{
			while(buckets[j]!=NULL)
			{
				//printf("%d\n", buckets[j]->val);
				//printf("%d is the value of K\n", k);
				arr[k]=buckets[j]->val;
				t=buckets[j]->next;
				free(buckets[j]);
				buckets[j]=t;
				k++;
			}
		}
		//printf("phase %d part 2 is complete\n",i);
		p=p*10;
	}
	for(i=0;i<n;i++)
		arr[i]+=min;
	printf("The list after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\n", arr[i]);
	free(arr);
}
struct node * createnode (int k)
{
	struct node *p = NULL;
	p=(struct node *)malloc(sizeof(struct node));
	p->val=k;
	p->next=NULL;
	return(p);
}
struct node * insertlast (struct node *h, int k)
{
	struct node *t=h;
	if(h==NULL)
	{
		h=createnode(k);
		return(h);
	}
	while(h->next!= NULL)
		h=h->next;
	h->next=createnode(k);
	return(t);
}
