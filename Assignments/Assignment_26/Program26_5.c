#include <stdio.h>
#include<stdlib.h>

void DisplayASCII(char ch)
{
    printf("Decimal : %d[span_0](start_span)[span_0](end_span)\n", ch);
    printf("Octal : %o\n", ch);
    printf("Hexadecimal : %X\n", ch);
}

int main()
{
    char cValue = '\0';
    
    printf("Enter the character: ");
    scanf(" %c", &cValue);
    
    DisplayASCII(cValue);
    
    return EXIT_SUCCESS;
}