#include <stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    
    // Filter (optional check for null pointer)
    if(str == NULL)
    {
        return 0;
    }
    
    while(*str != '\0')
    {
        // Logic to check if the character is a capital letter
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
    
    return iCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;
    
    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);
    
    iRet = CountCapital(Arr);
    
    printf("Number of capital characters: %d[span_0](start_span)[span_0](end_span)\n", iRet);
    
    return EXIT_SUCCESS;
}