#include <stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;
    
    // Filter
    if(str == NULL)
    {
        return 0;
    }
    
    while(*str != '\0')
    {
        // Logic to count small and capital characters
        if(*str >= 'a' && *str <= 'z')
        {
            iSmallCnt++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapCnt++;
        }
        str++;
    }
    
    // Return the difference (frequency of small - frequency of capital)
    return iSmallCnt - iCapCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;
    
    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);
    
    iRet = Difference(Arr);
    
    printf("Output : %d \n", iRet); // e.g., 6 (8-2)[span_0](start_span)[span_0](end_span)
    
    return EXIT_SUCCESS;
}