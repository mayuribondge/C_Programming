#include<stdio.h>

double SquareMeter(float iNo)
{

    float sqfeet=0.0929;
    float sqmeter;
    sqmeter=sqfeet*iNo;         //formula for sequarefit into sequaremeter
    return sqmeter;
}

int main()
{
    float fValue=0.0;
    float fRet=0.0;

    printf("enetr a squrae feet :");
    scanf("%f", &fValue);

    fRet=SquareMeter(fValue);

    printf("Convert square feet into sequare meter :%f", fRet);

    return 0;
}