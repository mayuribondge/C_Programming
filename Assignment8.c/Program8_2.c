#include <stdio.h>

int main()
{
    int num;

    
    printf("Enter a single digit number (0-9): ");
    scanf("%d", &num);

    
    switch (num)
    {
        case 0:
            printf("ZERO\n");
            break;

        case 1:
            printf("ONE\n");
            break;

        case 2:
            printf("TWO\n");
            break;

        case 3:
            printf("THREE\n");
            break;

        case 4:
            printf("FOUR\n");
            break;

        case 5:
            printf("FIVE\n");
            break;

        case 6:
            printf("SIX\n");
            break;

        case 7:
            printf("SEVEN\n");
            break;

        case 8:
            printf("EIGHT\n");
            break;

        case 9:
            printf("NINE\n");
            break;

        default:
            printf("Invalid input! Please enter a number between 0 and 9.\n");
    }

    return 0;
}
