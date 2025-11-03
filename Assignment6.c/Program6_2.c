#include<stdio.h>

void CheckGreatr(int num)
{
    if(num>100)
    {
        printf("number is geater than 100");
    }
    else
    {
        printf("number is not geater than 100");
    }
}
int main()
{
    int iValue=0;

    printf("Enter a number");
    scanf("%d", &iValue);

    CheckGreatr(iValue);

    return 0;
}