// Copy one array into another.
#include<stdio.h>

void Display(int arr[],int isize)
{
    int arr2[isize];

    for(int i=0;i<isize;i++)
    {
        arr2[i]=arr[i];
    }

    for(int i=0;i<isize;i++)
    {
        printf("%d\n",arr2[i]);
    }

}

int main()
{
    int arr[]={6,4,55,56,32};

    int isize=sizeof(arr) / sizeof(int);

    Display(arr,isize);
    
    return 0;
}