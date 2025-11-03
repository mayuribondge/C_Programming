#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float Area;
    Area=fWidth*fHeight;
    return Area;
}
int main()
{

    float fValue1=0.0;
    float fValue2=0.0;
    float fRet=0.0;

    printf("enter a width : ");
    scanf("%f",&fValue1);

    printf("enter a Height : ");
    scanf("%f",&fValue2);

    fRet=RectArea(fValue1,fValue2);

    printf("Area of raectangle %f", fRet);

    return 0;
}