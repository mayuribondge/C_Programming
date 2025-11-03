#include<stdio.h>

float Percetage(float num1,float num2)
{
    float per=1.0;
    per=(num2/num1)*100;
    return per;
}

int main()
{

    int totalmarks=0;
    int obtainedmarks=0;
    float fRet=1.0;

    printf("Enter a total marks");
    scanf("%d", &totalmarks);

    printf("Enter a obtained marks");
    scanf("%d", &obtainedmarks);

    fRet=Percetage(totalmarks,obtainedmarks);

    printf("Percentage%f",fRet);

    return 0;

}