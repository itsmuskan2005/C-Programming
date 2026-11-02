#include<stdio.h>
#include<stdlib.h>

int factorialdiff(int ino)
{
    int icnt = 0;
    int ieven = 1,iodd = 1;

    if(ino < 1)
    {
        ino = -ino;
    }
    for(icnt = ino; icnt >= 1; icnt--)
    {
        if(icnt % 2 == 0)
        {
            ieven = ieven * icnt;
        }
        else
        {
            iodd = iodd * icnt;
        }
    }
    return abs(iodd-ieven);
}
int main()
{
    int ivalue = 0,iret = 0;

    printf("enter number");
    scanf("%d",&ivalue);

    iret = factorialdiff(ivalue);

    printf("factorial difference is %d",iret);

    return EXIT_SUCCESS;
}