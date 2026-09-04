/*
    Program: Accept and Display Array Elements

    Description:
        This program accepts n elements from the user, stores
        them in a dynamically allocated array, and displays
        all the elements of the array.

    Concepts:
        - Arrays
        - Pointers
        - Dynamic Memory Allocation
        - malloc()
        - for Loop
        - User Input and Output
        - free()

    Author: Mayuri Bondge
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    int num = 0;

    printf("Enter the number of elements to insert in array: ");
    scanf("%d", &num);

    ptr = (int *)malloc(num * sizeof(int));

    if (ptr == NULL)
    {
        printf("Unable to allocate memory.\n");
        return -1;
    }

    printf("Enter the elements:\n");

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Elements of the array are:\n");

    for (int i = 0; i < num; i++)
    {
        printf("%d\t", ptr[i]);
    }

    printf("\n");

    free(ptr);

    return 0;
}