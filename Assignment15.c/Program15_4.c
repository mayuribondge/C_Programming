#include <stdio.h>

int MultiplyDigits(int iNo)
{
    int iDigit = 0;
    int iMult = 1;   

    
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    
    if (iNo == 0)
    {
        return 0;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;     
        iMult = iMult * iDigit; 
        iNo = iNo / 10;        
    }

    return iMult; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = MultiplyDigits(iValue);

    printf("Multiplication of all digits is: %d\n", iRet);

    return 0;
}
