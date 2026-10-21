#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("it is divisible by 5\n");
    }
    else
    {
        printf("it is not divisible by 5\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a Number:");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}