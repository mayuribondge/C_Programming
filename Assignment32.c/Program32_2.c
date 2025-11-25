////////////////////////////////////////////////////////////////
//
//  File Name   : Program32_2.c
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
//                   *   *   *   #                        
//                   *   *   #   @
//                   *   #   @   @
//                   @   @   @   @
//            
////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{
    int i, j;

    if(iRow!=iCol)
    {
        printf("Please enter the row and column same: \n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
           if(j == (iCol - i + 1))
            {
                printf("#\t");
            }
            else if(j < (iCol - i + 1))
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
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

    printf("Enter a number of Rows: ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns: ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
