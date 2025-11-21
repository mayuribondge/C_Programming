
////////////////////////////////////////////////////////////////
//
//  File Name   : Program26_2.c
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
//  Output        : 5   #   4   #   3   #   2   #   1   #
//
////////////////////////////////////////////////////////////////


void Pattern(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d",iCnt);
        printf("\t#\t");
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