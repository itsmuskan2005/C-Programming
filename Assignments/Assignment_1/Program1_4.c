#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int Bool;
#define true1
#define false2

Bool Check(int iNo)
{
    if((iNo % 5)== 0)
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
    int iValue = 0;
    Bool bRet = false;

    printf("enter number:\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("divisible by 5:\n");
    }
    else
    {
        printf("not divisible by 5:\n");
    }


    return EXIT_SUCCESS;
}