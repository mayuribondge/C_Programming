#include<stdio.h>
void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
    else
    {
        printf("Please enter a valid number or positive number");
    }
}

int main()
{
    int iValue=0;

    printf("Enter a number");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}