#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;
Bool chkzero(int ino)
{
    int idigit = 0;

    while(ino != 0)
    {
        idigit = ino % 10;
        if(idigit == 0)
        {
            return TRUE;
        }
        ino = ino / 10;
    }
    return FALSE;
    
}
int main()
{
    int ivalue = 0;
    Bool bret = FALSE;

    printf("enter number");
    scanf("%d",&ivalue);

    bret = chkzero(ivalue);

    if(bret == TRUE)
    {
        printf("it contains zero");
    }
    else
    {
        printf("there is no zero");
    }
    return EXIT_SUCCESS;
}