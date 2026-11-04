#include<stdio.h>
#include<stdlib.h>

typedef int Bool;

#define TRUE 1
#define FALSE 0

Bool ChkEqual(int ino1,int ino2)
{
    if(ino1 == ino2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;

    Bool bret = FALSE;

    printf("please enter two numbers :\n");
    scanf("%d %d",&ivalue1,&ivalue2);

    bret = ChkEqual(ivalue1, ivalue2);

    if(bret == TRUE)
    {
        printf("numbers are equal\n");
    }
    else
    {
        printf("numbers are not equal\n");
    }
    return EXIT_SUCCESS;
}