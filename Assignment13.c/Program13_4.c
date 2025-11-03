#include<stdio.h>
int PrintNumbers(int limit)
{
    int iCnt=0;
    int iSum=0;
    if(limit < 0)
    {
        limit=-limit;
    }
    for(iCnt=1; iCnt<=limit; iCnt++)
    {
        iSum=iSum+iCnt;
        
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter a number");
    scanf("%d",&iValue);
     
    iRet=  PrintNumbers(iValue);

    printf("find sum of first natutal numbers%d\n",iRet);

    return 0;
}