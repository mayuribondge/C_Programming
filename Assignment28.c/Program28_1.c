
////////////////////////////////////////////////////////////////
//
//  File Name   : Program28_1.c
//  Description : Accept the number of rows and column from user
//  Author      : Mayuri Bondge.
//  Date        : 22/11/2025
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern
//  Input         : Number of rows and Column
//  Output        : A   B   C   D
//                  A   B   C   D  
//                  A   B   C   D
//                  A   B   C   D
//
////////////////////////////////////////////////////////////////


void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    char ch='A';

    for(i=1;i<=iRow;i++)
    {
        ch='A';
        for(j=1;j<=iCol;j++,ch++)
        {
           printf("%c\t",ch); 
        }
        printf("\n");
    }
   
}

/////////////////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////////////////

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter a number of Rows:");
    scanf("%d",&iValue1);

    printf("Enter number of Column:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}