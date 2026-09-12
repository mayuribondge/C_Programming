#include<stdio.h>

void Display(int iNo)
{
    int first=0;
    int second=1;
    int next=0;

    for(int i=0;i<iNo;i++)
    {
        next=first+next;
        printf("%d\t",next);
        first=second;
        second=next;
    }
}

int main()
{
    int iNo=0;

    printf("Enter a number:");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}