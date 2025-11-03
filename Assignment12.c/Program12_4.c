#include<stdio.h>

int PrintFactor(int iNo)
{
    int iCnt=0;
    int iSum=0;
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt==0)
        {
            if(iCnt % 2==0)
            {
                printf("%d", iCnt);
                printf("\n");
                iSum=iSum+iCnt;
            }
        
        }
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter a number :");
    scanf("%d", &iValue);

    iRet=PrintFactor(iValue);
    printf("Sum of Total even factors of number :%d", iRet);
    return 0;

}