
////////////////////////////////////////////////////////////////
//
//  File Name   : Program1_1.c
//  Description : Accept the two number from user
//  Author      : Mayuri Bondge.
//  Date        : 25/11/2025
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : Pattern
//  Input         : Accept two number
//  Output        : Divisions is                       
//            
////////////////////////////////////////////////////////////////


int DivideTwoNumbers(int iNo1, int iNo2)
{
    int iAns=0;
    if(iNo2==0)
    {
        return -1;
    }

    iAns= iNo1 / iNo2;
    return iAns;
}

int main()
{
    int iValue1=15, iValue2=5;
    int iRet=0;


    iRet=DivideTwoNumbers( iValue1, iValue2);
    printf("Division is :%d ",iRet);

    return 0;
}