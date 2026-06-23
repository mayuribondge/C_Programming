/*
------------------------------------------------------------
Program: Print '*' Five Times Using Recursion

Description:
This program prints the '*' symbol five times using a recursive
function and a static variable.

Output:
*   *   *   *   *

Author: Mayuri Bondge
Language: C
------------------------------------------------------------
*/

#include <stdio.h>

// Recursive function to print '*' five times
void Display()
{
    // Static variable retains its value across recursive calls
    static int count = 1;

    // Base condition
    if (count <= 5)
    {
        printf("*\t");
        count++;

        // Recursive function call
        Display();
    }
}

int main()
{
    // Call the recursive function
    Display();

    return 0;
}
