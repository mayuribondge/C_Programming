#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt=0;
    int factsum=0;
    int nonfact=0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iNo % iCnt==0)
        {
            printf("Factor %d", iCnt);
            factsum=factsum+iCnt;
            printf("\n");
        }
      
    }
   

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iNo % iCnt!=0)
        {
            printf("Non factor %d", iCnt);
            nonfact=nonfact+iCnt;
            printf("\n");
        }
         
    }

    return factsum-nonfact;
    
}

int main()
{
    int ivalue=0;
    int iRet=0;

    printf("Enter a number");
    scanf("%d", &ivalue);

    iRet=FactDiff(ivalue);

    printf("Differnce between summation of factor and summation of non factor %d" , iRet);

    return 0;
}