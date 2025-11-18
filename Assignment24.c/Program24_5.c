////////////////////////////////////////////////////////////////
//
//  File Name   : program24_5.c
//  Description : Display summation of digits of each number
//  Author      : Mayuri Bondge.
//  Date        : 18/11/2026
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : DisplaySum
//  Description   : Prints summation of digits for each number
//  Input         : Integer array, length
//  Output        : Summation printed
//
////////////////////////////////////////////////////////////////

void DisplaySum(int Arr[], int iSize)
{
    int iCnt = 0, iNo = 0, iDigit = 0, iSum = 0;

    printf("Summation of digits of each number:\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNo = Arr[iCnt];
        iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("%d → %d\n", Arr[iCnt], iSum);
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
}
