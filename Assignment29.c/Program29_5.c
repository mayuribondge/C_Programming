////////////////////////////////////////////////////////////////
//
//  File Name   : Program29_5.c
//  Description : Accept the number of rows and column from user
//  Author      : Mayuri Bondge.
//  Date        : 23/11/2025
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern
//  Input         : Number of rows and Column
//  Output        : 
//                   1    2    3    4         
//                   2    3    4    5
//                   3    4    5    6
//                   4    5    6    7
////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", i + j - 1);
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
