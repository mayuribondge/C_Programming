////////////////////////////////////////////////////////////////
//
//  File Name   : program24_1.c
//  Description : Accept N numbers and return lrgest number in it
//  Author      : Mayuri Bondge.
//  Date        : 18/11/2026
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : Maximum
//  Description   : Returns largest number
//  Input         : Integer array, length, number
//  Output        : Largest number
//
////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;     

    for(iMax = Arr[iCnt], iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
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

    iRet = Maximum(Ptr, iSize);

    printf("Largest number is:%d",iRet);


    free(Ptr);
    return 0;
}
