#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
    printf("uppercase alphabet\n");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("lowercase alphabet\n");
    }   
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("digit\n");
    }
    else
    {
        printf("special character\n");
    }
}
int main()
{
    char cValue = 0;

    printf("enter a character: ");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}