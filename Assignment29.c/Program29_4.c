
////////////////////////////////////////////////////////////////
//
//  File Name   : Program29_3.c
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
//                   1    2    3    4    5     
//                  -1   -2   -3   -4   -5
//                   1    2    3    4    5
//                  -1   -2   -3   -4   -5
//                   1    2    3     4    5
//                 
////////////////////////////////////////////////////////////////


void Pattern(int iRow,int iCol)
{
    int i, j;
   
    
    for(i = 1; i <= iRow; i++)
    {
         
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)    
            {
                printf("%d\t",j);
               
                
            }
            else
            {
                printf("%d\t",-j);
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