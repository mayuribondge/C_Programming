#include <stdio.h>


int Factorial(int iNo)
{
    int iFact = 1;   
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;   
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iResult = Factorial(iValue);

    printf("Factorial of %d is: %d\n", iValue, iResult);

    return 0;
}
