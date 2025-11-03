#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int num1, int num2)
{
    if(num1==num2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    bool bRet=false;

    printf("Enter a first number");
    scanf("%d",&iValue1);

    printf("Enter a Second number");
    scanf("%d",&iValue2);

    bRet=ChkEqual(iValue1,iValue2);

    if(bRet==true)
    {
        printf("Both numbers are equal");
    }
    else
    {
        printf("Both numbers are not equal");
    }

    return 0;
}