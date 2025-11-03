#include<stdio.h>

double CircleArea(float fRadius)
{
    double PI=3.14;
    float Area=0.0;

    Area=PI*fRadius*fRadius;

    return Area;
}

int main()
{
    float fValue=0.0;
    float fRet=0;

    printf("Enetr a radius : ");
    scanf("%f", &fValue);

    fRet=CircleArea(fValue);

    printf("Area of Circle :%f ",fRet);

    return 0;
}