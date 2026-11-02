#include<stdio.h>
#include<stdlib.h>

int oddfactorial(int ino)
{
    int icnt = 0;
    int ifact = 1;

    if(ino < 0)
    {
        ino = -ino;
    }

    for(icnt = ino; icnt >= 1; icnt--)
    {
        if(icnt % 2 != 0)
        {
            ifact = ifact * icnt;
        }
    }
    return ifact;
}
int main()
{
    int ivalue = 0,iret = 0;

    printf("enter number");
    scanf("%d",&ivalue);

    iret = oddfactorial(ivalue);

    printf("odd factorial of number is %d",iret);

    return EXIT_SUCCESS;
}