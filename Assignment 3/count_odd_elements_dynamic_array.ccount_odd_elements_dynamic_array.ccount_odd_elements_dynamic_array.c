/*
    Program: Count Odd Elements in Array

    Description:
    This program dynamically allocates memory for an integer
    array and counts the number of odd elements using a
    user-defined function.

    Concepts:
    - Array
    - Pointer
    - Dynamic Memory Allocation
    - malloc()
    - typedef
    - User-Defined Function
    - Odd Number
    - Array Traversal
    - free()

    Author: Mayuri Bondge
*/

#include <stdio.h>
#include <stdlib.h>

typedef int *IPTR;

int CountOdd(int *arr, int iSize)
{
    int iCount = 0;

    for(int i = 0; i < iSize; i++)
    {
        if(arr[i] % 2 != 0)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iLength = 0;
    int iRet = 0;
    IPTR ptr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iLength);

    ptr = (IPTR)malloc(iLength * sizeof(int));

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

    iRet = CountOdd(ptr, iLength);

    printf("Number of odd elements: %d\n", iRet);

    free(ptr);

    return 0;
}