
////////////////////////////////////////////////////////////////
//
//  File Name   : Program26_4.c
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
//  Output        : #   1   *   #   2   *   #   3   *   #   4   *
//
////////////////////////////////////////////////////////////////


void Pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
         printf("#\t%d\t*\t", iCnt);
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