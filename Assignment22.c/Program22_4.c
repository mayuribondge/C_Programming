
////////////////////////////////////////////////////////////////
//
//  File Name   : program22_4.c
//  Description : Accept N number and return frequncy of 11
//  Author      : Mayuri Bondge.
//  Date        : 18/11/2026
//
////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : Frequncy
//  Description   : Returns frquncy of 11
//  Input         : Integer
//  Output        : Integer
//
////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int iFrequncy=0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]==11)
        {
           iFrequncy++; 
        }
        return iFrequncy;
    }

}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0;
    int iRet = 0;
    int *Ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    Ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]); 
    }

    iRet = Frequency(Ptr, iSize);

    printf("Frequncy of 11 is: %d\n",iRet);

    free(Ptr);
    return 0;
}
