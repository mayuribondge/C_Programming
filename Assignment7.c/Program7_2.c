#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d",iCnt);
        printf("\t");
    }
}

int main()
{
    
    int iValue=0;

    printf("Enetr a value");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}