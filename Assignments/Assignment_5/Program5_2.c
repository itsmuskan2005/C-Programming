#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("invalid year\n");
    }
    else if(iYear % 400 == 0)
    {
        printf("leap year\n");
    }
    else if(iYear % 4 == 0 && iYear % 100 != 0)
    {
        printf("leap year\n");
    }
    else
    {
        printf("not a leap year\n");
    }
}
int main()
{
    int iYear = 0;

    printf("enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}