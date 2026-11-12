#include<stdio.h>
#include<stdlib.h>

int firstchar(char *str,char ch)
{
    int i = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return i;
        }
        str++;
        i++;
    }
    return -1;
}
int main()
{
    char arr[100];
    char cvalue;
    int iret = 0;

    printf("enter string:");
    scanf("%[^\n]",arr);

    printf("enter the character:");
    scanf("%c",&cvalue);

    iret = firstchar(arr,cvalue);

    printf("character location is %d",iret);

    return EXIT_SUCCESS;
}