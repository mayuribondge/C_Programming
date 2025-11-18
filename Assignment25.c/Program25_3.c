////////////////////////////////////////////////////////////////
//
//  File Name   : program25_3.c
//  Description : Accept N numbers from user and display elements 
//                which are even AND divisible by 5
//  Author      : Mayuri Bondge.
//  Date        : 18/11/2026
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : DisplayEvenDivisibleByFive
//  Description   : Displays elements which are even and divisible by 5
//  Input         : Integer array, length
//  Output        : Number is even and divisble by 5
//
////////////////////////////////////////////////////////////////

void DisplayEvenDivisibleByFive(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Elements which are even and divisible by 5:\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2 == 0) && (Arr[iCnt] % 5 == 0))
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

    DisplayEvenDivisi
