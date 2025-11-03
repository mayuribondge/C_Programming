#include<stdio.h>
double FhtoCs(float fTemp)
{
    float celcius;
    celcius=((fTemp-32) * (5.0 /9.0));    // formula for convert ferhanite into celcius
    return celcius;
}

int main()
{
    float fValue=0.0;
    float fRet=0.0;

    printf("enter a fehrenheit");
    scanf("%f", &fValue);

    fRet= FhtoCs(fValue);

    printf("conver fehrenheit into celcius %f", fRet);

    return 0;

}