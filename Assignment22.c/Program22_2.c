
////////////////////////////////////////////////////////////////
//
//  File Name   : program22_2.c
//  Description : Accept N number and differnece between even and odd numbers
//  Author      : Mayuri Bondge.
//  Date        : 18/11/2026
//
////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : Frequncy
//  Description   : Returns diifernce(even-odd) frequncy
//  Input         : Integer
//  Output        : Integer
//
////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0;
    int eFrequency = 0;
    int oFrequency=0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)   
        {
            eFrequency++;
        }
    }
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)   
        {
            oFrequency++;
        }
    }
    return eFrequency-oFrequency;
    

}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *Ptr = NULL;

    printf("Enter number of elements:\n");
    scanf("%d", &iSize);

    Ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]); // FIXED
    }

    iRet = Frequency(Ptr, iSize);

    printf("Frequency of(even-odd) numbers: %d\n", iRet);

    free(Ptr);
    return 0;
}
