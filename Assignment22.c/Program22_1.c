
////////////////////////////////////////////////////////////////
//
//  File Name   : program22_1.c
//  Description : Accept N number  and counts frequency of even number
//  Author      : Mayuri Bondge.
//  Date        : 18/11/2026
//
////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : CountEven
//  Description   : Returns countEven frequncy
//  Input         : Integer
//  Output        : Integer
//
////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)   
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *Ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    Ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]); // FIXED
    }

    iRet = CountEven(Ptr, iSize);

    printf("Frequency of even numbers: %d\n", iRet);

    free(Ptr);
    return 0;
}
