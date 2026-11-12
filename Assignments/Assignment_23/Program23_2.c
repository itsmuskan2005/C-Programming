#include<stdio.h>
#include<stdlib.h>

void struprx(char * str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("enter string:");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("modified string is %s",arr);

    return EXIT_SUCCESS;
}