////////////////////////////////////////////////////////////////
//
//  File Name   : program24_2.c
//  Description : Accept N numbers and return smallest number in it
//  Author      : Mayuri Bondge.
//  Date        : 18/11/2026
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : Minimum
//  Description   : Returns smallest number
//  Input         : Integer array, length, number
//  Output        : smallest number
//
////////////////////////////////////////////////////////////////

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0;     

    for(iMin = Arr[iCnt], iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;
}

/////////////////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0;
    int *Ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

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

    iRet = Minimum(Ptr, iSize);

    printf("Largest number is:%d",iRet);


    free(Ptr);
    return 0;
}
