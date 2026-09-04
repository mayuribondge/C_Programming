/*
    Program: Average of Even Elements

    Description:
        This program accepts elements from the user using dynamic
        memory allocation and calculates the average of all even
        elements present in the array.

    Concepts:
        - Arrays
        - Dynamic Memory Allocation
        - malloc()
        - Pointers
        - Functions
        - for Loop
        - Conditional Statements
        - Modulus Operator
        - Type Casting

    Author: Mayuri Bondge
*/

#include <stdio.h>
#include <stdlib.h>

float Average(int *arr, int iSize)
{
    int iCount = 0;
    int iSum = 0;

    for (int i = 0; i < iSize; i++)
    {
        if (arr[i] % 2 == 0)
        {
            iSum = iSum + arr[i];
            iCount++;
        }
    }

    if (iCount == 0)
    {
        return 0.0;
    }

    return (float)iSum / iCount;
}

int main()
{
    int iLength;
    float fRet = 0.0;
    int *ptr = NULL;

    printf("Enter the number of elements: ");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

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

    fRet = Average(ptr, iLength);

    printf("Average of even elements is: %.2f\n", fRet);

    free(ptr);

    return 0;
}