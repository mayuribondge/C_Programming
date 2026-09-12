#include<stdio.h>

int main()
{
    int Arr[]={1,56,-6,98,1,89,-89};
    int iMin=Arr[6];

    for(int iCnt=0;iCnt<7;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);

        if(Arr[iCnt] < iMin)
        {
            iMin=Arr[iCnt];
        }
    }

    printf("Minimum number is:",iMin);

    return 0;
}