#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int CountOdd(int *arr,int iSize)
{
    int iCount=0;
    for(int i=0;i<iSize;i++)
    {
        if(arr[i] % 2!=0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength,iRet=0;
    IPTR ptr=NULL;

    printf("Enter a number of elemnts to entered");
    scanf("%d",&iLength);

    ptr=(IPTR)malloc(iLength * sizeof(int));

    if(NULL==ptr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for(int iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=CountOdd(ptr,iLength);

    printf("Number odd elements is:%d",iRet);

    return 0;
}