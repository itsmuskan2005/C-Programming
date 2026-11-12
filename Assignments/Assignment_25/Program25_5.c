#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>

void DisplaySchedule(char chDiv)
{
    chDiv = toupper(chDiv);

    switch(chDiv)
    {
        case 'A':
            printf("Your exam at 7.00 AM");
            break;

        case 'B':
            printf("Your exam at 8.30 AM");
            break;

        case 'C':
            printf("Your exam at 9.20 AM");
            break;

        case 'D':
            printf("Your exam at 10.30 AM");
            break;

        default:
            printf("Invalid Division");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division: ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}