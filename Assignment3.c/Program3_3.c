#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    printf("Even factors of %d are: ", iNo);

    for(i = 1; i <= iNo/2; i++)   // only need to check till iNo/2
    {
        if((iNo % i == 0) && (i % 2 == 0))  // factor and even check
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}
