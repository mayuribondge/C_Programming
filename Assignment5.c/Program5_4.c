#include<stdio.h>
void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("Number is positive");
    }
    else if(num < 0)
    {
        printf("number is negative");
    }
    else
    {
        printf("number is zero");
    }
}

int main()
{
    int number=0;

    printf("enter a number");
    scanf("%d", &number);

    CheckNumberType(number);

    return 0;
}