////////////////////////////////////////////////////////////////
//
//  File Name   : Program4.c
//  Description : Check whether number is diviible by 5 or not
//  Author      : Mayuri Bondge.
//  Date        : 25/11/2025
//
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////
// 
//  Function Name : Check()
//  Input         : Accept one number from user
//  Output        : Divisible by 5 or not                       
//            
////////////////////////////////////////////////////////////////
bool Check(int iNo)
{
    if((iNo % 5)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
////////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    bool bRet=0;

    printf("enter number\n");
    scanf("%d", &iValue);

    bRet=Check(iValue);

    if(bRet==true)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");
    }
    return 0;
}
