#include<stdio.h>

void PrintNumbers(int limit)
{
    int iCnt=1;
    for(iCnt=1; iCnt<=limit; iCnt++)
    {
        if(iCnt % 2==0)
        {
            printf("%d", iCnt);
          printf("\n");
        }
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number");
    scanf("%d",&iValue);
     
    PrintNumbers(iValue);

    return 0;
}