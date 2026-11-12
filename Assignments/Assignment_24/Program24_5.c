#include<stdio.h>
#include<stdlib.h>

void strrevx(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
    char arr[20];

    printf("enter string:");
    scanf("%[^'\n']s",arr);

    strrevx(arr);

    printf("modified string is %s",arr);

    return EXIT_SUCCESS;
}