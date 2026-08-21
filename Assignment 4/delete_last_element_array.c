/*
    Program: Delete Last Element from Array

    Description:
    This program deletes the last element of an array
    logically by reducing the size of the array by one.

    Example:
    Original Array: 10 15 20 25 30 35 40
    After Deletion: 10 15 20 25 30 35

    Concepts:
    - Arrays
    - Array Size
    - User-Defined Function
    - Element Deletion
    - Logical Deletion

    Author: Mayuri Bondge
*/

#include <stdio.h>

void DeleteLast(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int arr[] = {10, 15, 20, 25, 30, 35, 40};

    int size = sizeof(arr) / sizeof(arr[0]);

    // Reduce logical size by one
    size--;

    printf("After deleting last element:\n");

    DeleteLast(arr, size);

    return 0;
}