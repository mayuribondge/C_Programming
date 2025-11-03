#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt=0;
    int iSum=1;

    for(iCnt=1;iCnt<=iNo; iCnt++)
    {
        if(iNo % iCnt!=0)
        {
            
            printf("%d",iCnt);
            iSum=iSum+iCnt;
            printf("\n");
        }
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter  a Number");
    scanf("%d", &iValue);

    iRet=SumNonFact(iValue);

    printf("Summation of all non factor %d", iRet);

     return 0;
}