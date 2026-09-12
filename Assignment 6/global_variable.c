#include<stdio.h>

int x=15;

void Funn()
{
    printf("%d\n",x);
    x++;
    printf("%d\n",x);
}
int main()
{
    printf("%d\n",x);

    Funn();

    printf("%d\n",x);

    return 0;
}