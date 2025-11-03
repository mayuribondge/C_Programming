#include<stdio.h>

void CheckPrime(int year)
{
    if(year % 4==0)
    {
        printf("Year is leap");
    }
    else
    {
        printf("year is not leap");
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number");
    scanf("%d",&iValue);

    CheckPrime(iValue);

    return 0;
}