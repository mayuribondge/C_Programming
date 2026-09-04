// Take n Ekemnet from user and store them in array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr=NULL;
    int num=0;

    printf("Enter a number of elemnt to insert array:");
    scanf("%d",&num);

    ptr=malloc(num *sizeof(int));

    for(int i=0;i<num;i++)
    {
        scanf("%d\n",&ptr[i]);
    }
    

    for(int i=0 ;i<num;i++)
    {
        printf("%d\t",ptr[i]);
    }

    return 0;
}