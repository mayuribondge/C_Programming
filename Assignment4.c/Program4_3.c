#include<stdio.h>

void SumNonFact(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo; iCnt++)
    {
        if(iNo % iCnt!=0)
        {
            printf("%d",iCnt);
            printf("\n");
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter  a Number");
    scanf("%d", &iValue);

    SumNonFact(iValue);
    return 0;
}