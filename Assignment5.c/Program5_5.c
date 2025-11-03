#include<stdio.h>

void FindLargest(int x,int y, int z)
{
    if(x > y && x > z)
    {
        printf("Laragest value is%d",x);
    }
    else if(y > x && y > z)
    {
        printf("Largest value is%d", y);
    }
    else if(z > x && z > y)
    {
        printf("Largest value is%d",z);   
    }
    else 
    {
        printf("please enter valid number and three numbers differnt");
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    int iValuu3=0;

    printf("enter a first number");
    scanf("%d",&iValue1);

    printf("enter a second number");
    scanf("%d",&iValue2);

    printf("enter a third number");
    scanf("%d",&iValuu3);

    FindLargest(iValue1,iValue2, iValuu3);

    
    

    return 0;
}