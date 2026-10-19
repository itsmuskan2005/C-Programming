#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cValue)
{
    if((cValue >='a') && (cValue <= 'z'))
    {
        printf("%c\n",cValue - 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("enter character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}