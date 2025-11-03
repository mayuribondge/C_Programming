
#include<stdio.h>

void MultiFact(int iNo)
{
    int iCnt=0;
    int multi=1;
    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        if(iNo % iCnt==0)
        {
            printf("%d",iCnt);
            printf("\n");
        }
    }
    
   
}
int main()
{
   int iValue=0;
  
   printf("enter a number");
   scanf("%d",&iValue);

   MultiFact(iValue);

   return 0;
}