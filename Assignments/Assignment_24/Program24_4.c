#include<stdio.h>
#include<stdlib.h>

int lastchar(char *str,char ch)
{
    int i = 0;
    int ipos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            ipos = i;
        }
        str++;
        i++;
    }
    return ipos;
}
int main()
{
    char arr[20];
    char cvalue;
    int iret = 0;

    printf("enter string:");
    scanf("%[^'\n']s",arr);

    printf("enter the character:");
    scanf("%c",&cvalue);

    iret = lastchar(arr,cvalue);

    printf("character location is %d",iret);

    return EXIT_SUCCESS;
}