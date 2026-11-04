#include<stdio.h>
#include<stdlib.h>

int CountFour(int ino)
{
    int idigit = 0;
    int icount = 0;

    while(ino != 0)
    {
        idigit = ino % 10;
        if(idigit == 4)
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

    iret = CountFour(ivalue);

    printf("%d",iret);

    return EXIT_SUCCESS;
}