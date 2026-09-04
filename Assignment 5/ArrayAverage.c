#include<stdio.h>
#include<stdlib.h>

int Average(int *arr,int iSize)
{
    int iCount=0,iSum=0;
    for(int i=0;i<iSize;i++)
    {
        if(arr[i] % 2==0)
        {
            iSum=iSum+arr[i];
            iCount++;
        }
    }
    return iSum/iCount;
}

int main()
{
    int iLength,iRet=0;
    int *ptr=NULL;

    printf("Enter a number of elemnts to entered");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength * sizeof(int));

    if(NULL==ptr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    for(int iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=Average(ptr,iLength);

    printf("Average of all elemnt is elements is:%d",iRet);

    return 0;
}