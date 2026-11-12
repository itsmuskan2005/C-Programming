#include<stdio.h>
#include<stdlib.h>

void strtogglex(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
}
int main()
{
    char arr[100];

    printf("enter a string:");
    fgets(arr ,sizeof(arr),stdin);

    strtogglex(arr);

    printf("modified string is %s",arr);

    return EXIT_SUCCESS;
}