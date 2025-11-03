#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt % 2!=0)
        {
            printf("%d",iCnt);
            printf("\t");
        }
    }
}

int main()
{
    
    int iValue=0;

    printf("Enetr a value");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}