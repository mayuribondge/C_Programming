//-------------------------------------------//
// Author   : Mayuri Bondge
// Date     : 13-02-2026
//-------------------------------------------//

#include<stdio.h>

//-------------------------------------------//
//  Description : Print number in revese order
//  Input       : Accept number from user
//  Output      : Display the numbers in reverse order
//-------------------------------------------//

void Display(int iNo)
{
    static int iCnt=1;

    if(iCnt>=iNo)
    {
        printf("%d\n",iCnt);
        iCnt--;
        Display(iNo);
    }
}

//-------------------------------------------//
//  Entry point function
//-------------------------------------------//

int main()
{
    int iValue=0;

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}