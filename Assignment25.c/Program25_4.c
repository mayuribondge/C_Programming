////////////////////////////////////////////////////////////////
//
//  File Name   : program25_4.c
//  Description : Accept N numbers and display elements which are 
//                divisible by both 5 and 3
//  Author      : Mayuri Bondge.
//  Date        : 18/11/2026
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : DisplayDivisibleByFiveAndThree
//  Description   : Displays elements divisible by 5 AND 3
//  Input         : Integer array, length
//  Output        : Number is divisble by 5 and 3
//
////////////////////////////////////////////////////////////////

void DisplayDivisibleByFiveAndThree(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Elements divisible by both 5 and 3:\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 3 == 0))
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}

/////////////////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
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

    DisplayDivisibleByFiveAndThree(Ptr, iSize);

    free(Ptr);
    return 0;
}
