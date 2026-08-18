/*
    Program: Find Minimum Element in Array

    Description:
    This program stores integer elements in an array and
    finds the minimum element by comparing each array
    element with the current minimum value.

    Concepts:
    - Array
    - for Loop
    - Conditional Statement
    - Comparison Operator
    - Minimum Element

    Author: Mayuri Bondge
*/

#include <stdio.h>

int main()
{
    int Arr[] = {1, 56, -6, 98, 1, 89, -89};
    int iMin = Arr[0];

    printf("Array elements:\n");

    for(int iCnt = 0; iCnt < 7; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);

        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    printf("Minimum number is: %d\n", iMin);

    return 0;
}