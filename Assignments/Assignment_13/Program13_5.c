#include<stdio.h>
#include<stdlib.h>

int CountDiff(int ino)
{
    int idigit = 0;
    int iEven = 0;
    int iOdd = 0;

    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino != 0)
    {
        idigit = ino % 10;

        if(idigit % 2 == 0)
        {
            iEven = iEven + idigit;
        }
        else
        {
            iOdd = iOdd + idigit;
        }
        ino = ino / 10;
    }
    return(iEven - iOdd);
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter number");
    scanf("%d",&ivalue);

    iret = CountDiff(ivalue);

    printf("%d",iret);

    return EXIT_SUCCESS;
}