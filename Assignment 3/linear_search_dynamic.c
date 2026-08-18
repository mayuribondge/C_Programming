/*
    Program: Linear Search Using Dynamic Memory

    Description:
    This program dynamically allocates memory for an integer
    array and searches for a given element using Linear Search.

    Concepts:
    - Linear Search
    - Dynamic Memory Allocation
    - malloc()
    - Pointer
    - typedef
    - Boolean Data Type
    - break Statement
    - Array Traversal
    - free()

    Author: Mayuri Bondge
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int *IPTR;

bool LinearSearch(int *arr, int iSize, int iValue)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(arr[i] == iValue)
        {
            break;
        }
    }

    if(i < iSize)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iLength = 0;
    int iValue = 0;
    bool bRet = false;

    IPTR ptr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iLength);

    printf("Enter the number to search: ");
    scanf("%d", &iValue);

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

    bRet = LinearSearch(ptr, iLength, iValue);

    if(bRet)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    free(ptr);

    return 0;
}