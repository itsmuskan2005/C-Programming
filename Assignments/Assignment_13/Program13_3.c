#include<stdio.h>
#include<stdlib.h>

int CountRange(int ino)
{
    int idigit = 0;
    int icount = 0;
    
    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino != 0)
    {
        idigit = ino % 10;

        if((idigit >= 3) && (idigit <= 7))
        {
            icount++;
        }
        ino = ino / 10;
    }
    return icount;
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter number");
    scanf("%d",&ivalue);

    iret = CountRange(ivalue);

    printf("%d",iret);

    return EXIT_SUCCESS;
}