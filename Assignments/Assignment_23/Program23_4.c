#include<stdio.h>
#include<stdlib.h>

void Displaydigit(char * str)
{
    while(*str != '\0')
    {
        if(*str>='0'&&*str<='9')
        {
            printf("%c",*str);
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("enter string:");
    scanf("%[^'\n']s",arr);

    Displaydigit(arr);

    return EXIT_SUCCESS;
}