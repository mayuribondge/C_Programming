#include <stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;

    for (int i = iNo; i >= 1; i--)   
    {
        if (i % 2 != 0)             // to check odd factor 
        {
            iFact = iFact * i;  
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Even odd factorial of %d is: %d\n", iValue, iRet);

    return 0;

}
