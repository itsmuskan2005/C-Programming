#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int Bool;
Bool chkEven(int iNo)
{
     if((iNo % 2)== 0)
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

    printf("enter number");
    scanf("%d",&iValue);

    bRet = chkEven(iValue);
    //Display result
    if(bRet == true)
    {
        printf("%d is an even number\n",iValue);
    }
    else
    {
        printf("%d is an odd numberr\n",iValue);
    }

    return EXIT_SUCCESS;

}