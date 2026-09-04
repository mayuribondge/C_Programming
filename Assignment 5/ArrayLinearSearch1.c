/*
    Program: Linear Search

    Description:
        This program searches for a given number in an array
        using the Linear Search technique. It checks whether
        the given number is present in the array.

    Concepts:
        - Arrays
        - Pointers
        - Dynamic Memory Allocation
        - malloc()
        - typedef
        - Boolean Data Type
        - Functions
        - for Loop
        - Conditional Statements
        - Linear Search
        - break Statement

    Author: Mayuri Bondge
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int *IPTR;

bool LinearSearch(int *arr, int iSize, int iFrequency)
{
    int i = 0;

    for (i = 0; i < iSize; i++)
    {
        if (arr[i] == iFrequency)
        {
            break;
        }
    }

    if (i < iSize)
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
    int iLength;
    int num = 0;
    bool bRet = false;
    IPTR ptr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iLength);

    printf("Enter the number to search: ");
    scanf("%d", &num);

    ptr = (IPTR)malloc(iLength * sizeof(int));

    if (NULL == ptr)
    {
        printf("Unable to allocate memory.\n");
        return -1;
    }

    printf("Enter the elements:\n");

    for (int iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    bRet = LinearSearch(ptr, iLength, num);

    if (bRet)
    {
        printf("Element is present.\n");
    }
    else
    {
        printf("Element is not present.\n");
    }

    free(ptr);

    return 0;
}