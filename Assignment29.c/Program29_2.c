
////////////////////////////////////////////////////////////////
//
//  File Name   : Program29_2.c
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
//  Output        : 2   4   6   8   10   
//                  1   3   5   7   9
//                  2   4   6   8   10
//                  1   3   5   7   9
//
////////////////////////////////////////////////////////////////


void Pattern(int iRow,int iCol)
{
    int i, j;
    
    for(i = 1; i <= iRow; i++)
    {
        int even = 2;  
        int odd  = 1;  

        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)    
            {
                printf("%d\t", even);
                even = even + 2;
                if(even > 10)     
                {
                    even = 2;
                }
            }
            else              
            {
                printf("%d\t", odd);
                odd =odd + 2;
                
                if(odd > 9)       
                {
                    odd = 1;
                }

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