#include<stdio.h>
#include<stdbool.h>

bool IsDividibleByFive(int iNo)
{
    int iCnt=0;
    int iSum=0;
    if(iNo < 0)
    {
        return false;
    }
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo % 5==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    printf("enter a number :");
    scanf("%d", &iValue);

    bRet=IsDividibleByFive(iValue);

    if(bRet==true)
    {
        printf("number is divible by 5");
    }
    else
    {
        printf("number is not divisble by 5");
    }
   return 0;
}