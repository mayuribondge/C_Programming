#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iNum = 2;   

    if (iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNum % 2)==0)
        {
            printf("%d", iNum);
        }
          
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number: ");
    scanf("%d", &iValue);   
    
    PrintEven(iValue);

    return 0;
}
