#include<stdio.h>

void CheckEvenOdd(int num)
{
    if(num % 2==0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }
}

int main()
{
    int iValue=0;

    printf("enter number");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}