
////////////////////////////////////////////////////////////////
//
//  File Name   : Program28_2.c
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
//                  a   b   c   d  
//                  A   B   C   D
//                  a   b   c   d
//
////////////////////////////////////////////////////////////////


void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    char ch1='A',ch2='a';

    for(i=1;i<=iRow;i++)
    {
        ch1='A';
        ch2='a';
        if(i % 2!=0)
        {
            for(j=1;j<=iCol;j++,ch1++)
            {
            printf("%c\t",ch1); 
            }
        }
        else
        {
            for(j=1;j<=iCol;j++,ch2++)
            {
            printf("%c\t",ch2); 
            }
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