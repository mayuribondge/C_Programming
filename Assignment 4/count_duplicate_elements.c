// Count duplicate elements.

#include<stdio.h>

int main()
{
    int arr[]={11,13,15,55,11,65,9,13};
    int iCount=0;

    int size=sizeof(arr) / sizeof(int);

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                iCount++;
            }
        }
    }

    printf("%d\n",iCount);

    return 0;
}