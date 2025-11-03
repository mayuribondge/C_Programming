#include<stdio.h>
void RangeDisplay(int iStart, int iEnd)
{

    int iRet=0;
    int iCnt=0;
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        
    }
    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        printf("%d", iCnt);
        printf("\n");
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("Enetr a starting point ");
    scanf("%d", &iValue1);

    printf("Enetr a ending point ");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1,iValue2);


    return 0;
}

//Time Complexitiy of program:O(n)