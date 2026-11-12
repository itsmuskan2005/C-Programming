#include <stdio.h>
#include<stdlib.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

BOOL ChkSpecial(char ch)
{
    // Apply condition to check whether it is special or not.
    if (ch == '!' || ch == '@' || ch == '#' || ch == '$' || 
        ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        return TRUE;
    }
    
    return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter the character: ");
    scanf(" %c", &cValue);
    
    bRet = ChkSpecial(cValue);
    
    if (bRet == TRUE)
    {
        printf("It is a special character\n");
    }
    else
    {
        printf("It is not a special character\n");
    }
    
    return EXIT_SUCCESS;
}