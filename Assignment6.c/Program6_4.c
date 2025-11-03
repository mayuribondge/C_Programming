#include<stdio.h>
int Multiply(int num1, int num2, int num3)
{
    int ans=0;
    ans=num1*num2*num3;
    return ans;
}

int main()
{

    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    int iRet=0;

    printf("Enter a First number");
    scanf("%d", &iValue1);

    printf("Enter a Second number");
    scanf("%d", &iValue2);

    printf("Enter a Third number");
    scanf("%d", &iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is%d",iRet);
    return 0;
}