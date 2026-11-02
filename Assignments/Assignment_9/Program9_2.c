#include<stdio.h>
#include<stdlib.h>

int dollartoINR(int ino)
{
    int iAns = 0;

    iAns = ino * 70;

    return iAns;
}
int main()
{
    int ivalue = 0, iret = 0;

    printf("enter number of USD");
    scanf("%d",&ivalue);

    iret = dollartoINR(ivalue);

    printf("value in INR is %d",iret);

    return EXIT_SUCCESS;
}