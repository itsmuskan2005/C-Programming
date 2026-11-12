#include<stdio.h>
#include<stdlib.h>

int countwhite(char * str)
{
    int count = 0;

    while(*str != '\0')
    {
        if(*str == "")
        {
            count++;
        }
        str++;
    }
    return count;
}
int main()
{
    char arr[20];
    int iret = 0;

    printf("enter string:");
    scanf("%[^'\n']s",arr);

    iret = countwhite(arr);

    printf("%d",iret);

    return EXIT_SUCCESS;
}