#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}

void heapify(int arr[],int n)
{
    //first element forms a heap,by default.
    //insert second element onwards
}



int main()
{
    int k=0;
    int arr[100]={8,121,5,4,15,49,79};
    int n=9,capacity=100;

    heapify(arr,n);
    //printf(the element in level order to check)
    insert (arr,&n,capacity,47);
    insert (arr,&n,capacity,61);
    insert (arr,&n,capacity,4);
    insert (arr,&n,capacity,7);
    //print the elements in level order to check
    k=delete(arr,&n);
    printf("%d\n",k);
    k=delete(arr,&n);
    printf("%d\n",k);
    //print the elements in level order to check

}


