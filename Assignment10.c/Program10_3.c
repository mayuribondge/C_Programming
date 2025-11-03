#include<stdio.h>
int KMtoMeter(int iNo)
{
    int km=0;
    int meter=0.0;
    meter=iNo*1000;     // formula for convert km to meter
    return meter;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("entr a kilometer ");
    scanf("%d", &iValue);

    iRet=KMtoMeter(iValue);

    printf("convert km to meter %d", iRet);

    return 0;
}