#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;

BOOL chkchar(char*str,char ch)
{
    while(*str!='\0')
    {
        if(*str == ch)
        {
            return true;
        }
        str++;
    }
    return false;
}
int main()
{
    char arr[20];
    char cvalue;
    BOOL bret = false;

    printf("enter string:");
    scanf("%[^'\n']s",arr);

    printf("enter the character:");
    scanf("%c",&cvalue);

    bret = chkchar(arr,cvalue);

    if(bret == true)
    {
        printf("character found");
    }
    else
    {
        printf("character not found");
    }
    return EXIT_SUCCESS;
}