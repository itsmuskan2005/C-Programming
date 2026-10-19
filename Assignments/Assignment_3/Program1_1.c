#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int icnt = 1;

    while(icnt <= iNo)
    {
        printf("%d\t",icnt*2);
        icnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}