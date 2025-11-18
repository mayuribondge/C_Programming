////////////////////////////////////////////////////////////////
//
//  File Name   : program23_3.c
//  Description : Count how many elements lie between a given range
//  Author      : Mayuri Bondge.
//  Date        : 18/11/2026
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : Range
//  Description   : Returns count of numbers between Start and End (inclusive)
//  Input         : Integer array, length, start, end
//  Output        : Integer count
//
////////////////////////////////////////////////////////////////

int Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
            iCount++;     
        }
    }

    return iCount;
}

/////////////////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0, iValue1 = 0, iValue2 = 0;
    int *Ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    printf("Enter starting number:\n");
    scanf("%d", &iValue1);

    printf("Enter ending number:\n");
    scanf("%d", &iValue2);

    Ptr = (int *)malloc(iSize * sizeof(int));

    if(Ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return -1;
    }

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]);
    }

    iRet = Range(Ptr, iSize, iValue1, iValue2);

    printf("Count of elements between range %d and %d is: %d\n",
           iValue1, iValue2, iRet);

    free(Ptr);
    return 0;
}
