/*
    Program: Average of Even Elements

    Description:
    This program dynamically allocates memory for an array,
    accepts elements from the user, and calculates the average
    of all even elements using a user-defined function.

    Concepts:
    - Dynamic Memory Allocation
    - malloc()
    - Pointer
    - Array
    - User-Defined Function
    - Even Number
    - Average Calculation
    - Memory Deallocation

    Author: Mayuri Bondge
*/

#include <stdio.h>
#include <stdlib.h>

int Average(int *arr, int iSize)
{
    int iCount = 0;
    int iSum = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] % 2 == 0)
        {
            iSum = iSum + arr[i];
            iCount++;
        }
    }

    if(iCount == 0)
    {
        return 0;
    }

    return iSum / iCount;
}

int main()
{
    int iLength = 0;
    int iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements:\n");

    for(int iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = Average(ptr, iLength);

    printf("Average of even elements: %d\n", iRet);

    free(ptr);

    return 0;
}