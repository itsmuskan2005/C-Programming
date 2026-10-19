#include<stdio.h>
#include<stdlib.h>

typedef int Bool;

#define true 1
#define false 0

Bool chkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || 
       cValue == 'i' || cValue == 'o' || 
       cValue == 'u' || cValue == 'A' || 
       cValue == 'E' || cValue == 'I' || 
       cValue == 'O' || cValue == 'U' )
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
    char cValue = '\0';
    Bool bRet = false;

    printf("enter character\n");
    scanf("%c",&cValue);

    bRet = chkVowel(cValue);

    if(bRet == true)
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is not vowel");
    }
    return EXIT_SUCCESS;
}