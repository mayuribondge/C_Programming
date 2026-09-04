#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

bool LinearSearch(int *arr,int iSize,int iFrequency)
{
    int iCount=0;
    for(int i=0;i<iSize;i++)
    {
        if(arr[i] ==iFrequency)
        {
            iCount++;
        }
    }
    if(iCount > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iLength,num=0;
    bool bRet=false;
    IPTR ptr=NULL;

    printf("Enter a number of elemnts to entered");
    scanf("%d",&iLength);

    printf("Enter a number to count the frequenccy of number:");
    scanf("%d",&num);

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

    bRet=LinearSearch(ptr,iLength,num);

    if(bRet)
    {
        printf("Elemnts is present:");
    }
    else
    {
        printf("Elemnts is not present:");
    }
    
    return 0;
}