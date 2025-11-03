#include <stdio.h>


int ReverseNumber(int iNo)
{
    int iDigit = 0, iRev = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;           
        iRev = (iRev * 10) + iDigit; 
        iNo = iNo / 10;              
    }

    return iRev;
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iResult = ReverseNumber(iValue);

    printf("Reversed number is: %d\n", iResult);

    return 0;
}
