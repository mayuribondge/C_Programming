#include<stdio.h>
#include<stdbool.h>

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