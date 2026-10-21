#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is greater\n",iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is greater\n",iSecond);
    }
    else
    {
        printf("both number are equal\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("enter the first number:");
    scanf("%d",&iValue1);

    printf("enter the second number:");
    scanf("%d",&iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}