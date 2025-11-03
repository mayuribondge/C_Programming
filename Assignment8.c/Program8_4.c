#include <stdio.h>

// Function to display table of given number
void DisplayTable(int iNo)
{
    int iCnt = 0;

    printf("Multiplication table of %d is:\n", iNo);

    for (iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d ", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    DisplayTable(iValue);

    return 0;
}
