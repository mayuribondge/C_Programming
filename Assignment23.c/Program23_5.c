////////////////////////////////////////////////////////////////
//
//  File Name   : program23_3.c
//  Description : Accept n number and return product of all odd numbers
//  Author      : Mayuri Bondge.
//  Date        : 18/11/2026
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : Product
//  Description   : Returns count of numbers between Start and End (inclusive)
//  Input         : Integer array, length
//  Output        : Integer number of odd count
//
////////////////////////////////////////////////////////////////

int Product(int Arr[], int iLength)
{
    int iCnt = 0;
    int iProduct = 1;
    int oddFound = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)     // if odd
        {
            iProduct = iProduct * Arr[iCnt];
            oddFound = 1;          // mark odd number found
        }
    }

    if(oddFound == 0)
    {
        return 0;                  // no odd numbers
    }

    return iProduct;
}


/////////////////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0;
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

    iRet = Product(Ptr, iSize);

    printf("Product is%d",iRet);
    free(Ptr);
    return 0;
}
