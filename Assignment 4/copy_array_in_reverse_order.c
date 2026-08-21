// Copy an array in reverse order.
#include<stdio.h>

void Display(int arr[],int isize)
{
    int arr2[isize];

    for(int i=0;i<isize;i++)
    {
        arr2[i]=arr[isize-1-i];
    }

    printf("After reverse order:");
    for(int i=0;i<isize;i++)
    {
        printf("%d\n",arr2[i]);
    }

}

int main()
{
    int arr[]={6,4,55,56,32};

    int isize=sizeof(arr) / sizeof(int);

    printf("Origianl array:");
    for(int i=0;i<isize;i++)
    {
        printf("%d\n",arr[i]);
    }

    Display(arr,isize);
    
    return 0;
}