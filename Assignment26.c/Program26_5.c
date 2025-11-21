
////////////////////////////////////////////////////////////////
//
//  File Name   : Program26_5.c
//  Description : Display the pattern
//  Author      : Mayuri Bondge.
//  Date        : 21/11/2025
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern
//  Input         : Accetp the integer number
//  Output        : 2   4   6   8   10   12   14   16
//
////////////////////////////////////////////////////////////////


void Pattern(int iNo)
{
    int iCnt=0;
    int iEven=2;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
         printf("%d\t", iEven);
         iEven=iEven+2;
    }
   
}

/////////////////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;

    printf("Enter a number of element:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}