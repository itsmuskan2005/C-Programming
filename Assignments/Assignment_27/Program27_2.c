#include <stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    
    // Filter
    if(str == NULL)
    {
        return 0;
    }
    
    while(*str != '\0')
    {
        // Logic to check if the character is a small letter
        if(*str >= 'a' && *str <= 'z')
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
    
    iRet = CountSmall(Arr);
    
    printf("Number of small characters: %d[span_0](start_span)[span_0](end_span)\n", iRet);
    
    return EXIT_SUCCESS;
}