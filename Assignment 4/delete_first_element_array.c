#include<stdio.h>

void Deletefirst(int arr[],int size)
{
    for(int i=0;i<size - 1;i++)
    {
        arr[i]=arr[i+1];
    }
}

int main()
{
    int arr[]={10,15,20,25,30,35,40};

    int size=sizeof(arr) / sizeof(int);

    Deletefirst(arr,size);

    printf("After deleting first elemnt:\n");

    for(int i=0;i<size-1;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}