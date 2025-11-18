
////////////////////////////////////////////////////////////////
//
//  File Name   : program23_1.c
//  Description : Accept N number and check whether number is present or not
//  Author      : Mayuri Bondge.
//  Date        : 18/11/2026
//
////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : Check
//  Description   : Returns N number is present or not
//  Input         : Integer
//  Output        : Integer
//
////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            return true;
        }
    }
    return false;   
}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0,iValue=0;
    bool bRet = 0;
    int *Ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    printf("Enter number to check :\n");
    scanf("%d",&iValue);

    Ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]); // FIXED
    }

    bRet = Check(Ptr, iSize,iValue);

    if(bRet==true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(Ptr);
    return 0;
}
