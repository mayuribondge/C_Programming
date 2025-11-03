#include<stdio.h>
void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt=0;
    int iSum=0;

    if(iStart>iEnd)
    {
        printf("Invalid range\n");
    }
    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {   
        if(iCnt % 2==0)
        {
            iSum=iSum+iCnt;
            printf("%d", iSum);
            printf("\n");
        }
    }

}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter a strting");
    scanf("%d", &iValue1);

    printf("Enter a ending");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;
}