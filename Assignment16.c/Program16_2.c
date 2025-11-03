#include <stdio.h>


void CheckEvenOdd(int iNo)
{
    if (iNo % 2 == 0)
    {
        printf("%d is an Even number.\n", iNo);
    }
    else
    {
        printf("%d is an Odd number.\n", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return 0;
}
