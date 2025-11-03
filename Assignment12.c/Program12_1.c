#include<stdio.h>

void PrintFactor(int iNo)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iNo % iCnt==0)
        {
            printf("%d",iCnt);
            printf("\n");
        }
    }

}

int main()
{
    int iValue=0;

    printf("enter a number ");
    scanf("%d", &iValue);

    PrintFactor(iValue);

    return 0;

}