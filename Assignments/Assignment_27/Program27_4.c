#include <stdio.h>
#include<stdlib.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    // Filter
    if (str == NULL)
    {
        return FALSE;
    }

    // Logic to check if string contains any vowel
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);
    
    if (bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return EXIT_SUCCESS;
}