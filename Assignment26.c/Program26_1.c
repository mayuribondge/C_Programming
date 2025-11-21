
////////////////////////////////////////////////////////////////
//
//  File Name   : Program26_1.c
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
//  Output        : A   B   C   D   E
//
////////////////////////////////////////////////////////////////


void Pattern(int iNo)
{
    int i=0;
    char ch='A';
    for(i=0;i<iNo;i++)
    {
        printf("%c\t",ch);
        ch++;
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