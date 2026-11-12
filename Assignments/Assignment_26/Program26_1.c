#include <stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int i = 0;

    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("---------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t%X\t\t%o\n",
               (i >= 32 && i <= 126) ? i : ' ',
               i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}