#include<stdio.h>

void FindMax(int a,int b)
{
    if(a > b)
    {
        printf(" maximum number is%d", a);
    }
    else if(a < b)
    {
        printf(" maximum number is %d",b);
    }
    else
    {
        printf("plese enter valid number and  differnt number");
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter a First number");
    scanf("%d", &iValue1);

    printf("Enter a Second number");
    scanf("%d", &iValue2);

    FindMax(iValue1, iValue2);

    return 0;
}