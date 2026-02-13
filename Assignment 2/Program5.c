//----------------------------------------------//
// Author   : Mayuri Bondge
// Date     : 13-02-2026
// File name: Program5.c
//----------------------------------------------//

#include<stdio.h>

//----------------------------------------------//
//  Description : Print number A to F in order
//                in reverse order
//  Input       : Nothing
//  Output      : Display the A to F in reverse order
//----------------------------------------------//

void Display()
{
    char ch='\0';
    for(ch='F';ch>='A';ch--)
    {
        printf("%c\t",ch);
    }
}

//----------------------------------------------//
//  Entry point function
//----------------------------------------------//

int main()
{
    Display();

    return 0;
}