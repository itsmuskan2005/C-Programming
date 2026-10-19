#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int icnt = 0;
    for(icnt = 1;icnt <= 5; icnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    return EXIT_SUCCESS;
}