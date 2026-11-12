#include<stdio.h>
#include<stdlib.h>

int countchar(char*str,char ch)
{
    int count = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cvalue;
    int iret = 0;

    printf("enter string:");
    scanf("%[^\n]",arr);

    printf("enter the character:");
    scanf("%c",&cvalue);

    iret = countchar(arr,cvalue);

    printf("frequency is: %d",iret);

    return EXIT_SUCCESS;
}