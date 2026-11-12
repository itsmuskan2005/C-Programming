#include <stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    char *end = str;
    
    // Filter
    if (str == NULL)
    {
        return;
    }
    
    // Move end pointer to the end of the string (just before '\0')
    while (*end != '\0')
    {
        end++;
    }
    end--;
    
    // Display the string in reverse order
    while (end >= str)
    {
        printf("%c", *end);
        end--;
    }
    printf("\n");
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", arr);

    Reverse(arr);

    return EXIT_SUCCESS;
}