#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("Divisible by both\n");
    }
    else if(iValue % 3 == 0)
    {
        printf("Divisible by 3 only\n");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 only\n");
    }
    else
    {
        printf("not Divisible by Either\n");
    }
   
}
int main()
{
    int iValue = 0;

    printf("enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}