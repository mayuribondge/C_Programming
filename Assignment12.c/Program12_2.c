#include<stdio.h>

int PrintFactor(int iNo)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iNo % iCnt==0)
        {
            iCnt++;
        }
    }

    return iCnt;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter a number ");
    scanf("%d", &iValue);

    iRet=PrintFactor(iValue);
    printf("Total factors of number %d", iRet);
    return 0;

}