#include <stdio.h>


int CountDigits(int iNo)
{
    int iCnt = 0;

    
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    
    if (iNo == 0)
    {
        return 1;
    }

    while (iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;   
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iResult = CountDigits(iValue);

    printf("Number of digits in %d is: %d\n", iValue, iResult);

    return 0;
}
