#include<stdio.h>

int MultiFact(int iNo)
{
    int iCnt=0;
    int multi=1;
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if(iNo % iCnt==0)
        {
            printf("%d", iCnt);
            printf("\n");
            multi=multi*iCnt;
        }
    }
    return multi;
}
int main()
{
   int iValue=0;
   int iRet=0;

   printf("enter a number");
   scanf("%d",&iValue);

   iRet=MultiFact(iValue);

   printf("multiplication factor %d", iRet);

   return 0;
}