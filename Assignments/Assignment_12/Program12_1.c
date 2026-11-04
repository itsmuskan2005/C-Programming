#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int ino)
{
    int idigit = 0;

    if(ino < 0)
    {
        ino = -ino;
    }
    if(ino == 0)
    {
        printf("0\n");
    }
    while(ino != 0)
    {
        idigit = ino % 10;
        printf("%d\n",idigit);

        ino = ino / 10;
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number");
    scanf("%d",&ivalue);

    DisplayDigit(ivalue);

    return EXIT_SUCCESS;
}