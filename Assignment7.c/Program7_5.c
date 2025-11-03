#include<stdio.h>

void MultiplyDisplay(int iNo)
{
    int iCnt=0;
   
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d",iNo*iCnt);
        printf("\t");
    }
}

int main()
{
    
    int iValue=0;
    
    printf("Enetr a value");
    scanf("%d",&iValue);

    MultiplyDisplay(iValue);
    
    return 0;
}