#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int Bool;

Bool chkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cvalue = '\0';
    Bool bret = false;

    printf("enter the character:");
    scanf("%c",&cvalue);

    bret = chkDigit(cvalue);

    if(bret == true)
    {
        printf("it is digit");
    }
    else
    {
        printf("it is not a digit");
    }
    return EXIT_SUCCESS;
}