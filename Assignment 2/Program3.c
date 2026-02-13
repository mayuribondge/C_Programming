//-------------------------------------------//
// Author   : Mayuri Bondge
// Date     : 13-02-2026
// File name: Program3.c
//-------------------------------------------//

#include<stdio.h>

//-------------------------------------------//
//  Description : Print number in reverse
//  Input       : Accept number from user
//  Output      : Display the numbers in reverse order
//-------------------------------------------//

void Display(int iNo)
{
    if(iNo>=1)
    {
        printf("%d\n",iNo);
        iNo--;
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