#include <stdio.h>


void DisplayReverse(int iNo)
{
    int iDigit = 0;

    printf("Digits in reverse order are:\n");

    while (iNo != 0)
    {
        iDigit = iNo % 10;      
        printf("%d\n", iDigit); 
        iNo = iNo / 10;         
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    DisplayReverse(iValue);

    return 0;
}
