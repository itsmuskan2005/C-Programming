#include<stdio.h>
#include<stdlib.h>

typedef int Bool;
#define TRUE 1
#define FALSE 0

Bool ChkGreater(int ino)
{
    if(ino > 100)
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
    int ivalue = 0;

    Bool bret = FALSE;

    printf("please enter number :\n");
    scanf("%d",&ivalue);

    bret = ChkGreater(ivalue);

    if(bret == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }
    return EXIT_SUCCESS;
}