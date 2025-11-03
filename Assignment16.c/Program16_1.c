#include <stdio.h>


int SumNatural(int n)
{
    int i = 0;
    int sum = 0;

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;   
    }

    return sum;
}

int main()
{
    int n = 0;
    int result = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    result = SumNatural(n);

    printf("Sum of first %d natural numbers is: %d\n", n, result);

    return 0;
}
