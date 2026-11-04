#include<stdio.h>
#include<stdlib.h>

int MultDigits(int ino)
{
    int idigit = 0;
    int iMult = 1;
    
    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino != 0)
    {
        idigit = ino % 10;

        iMult = iMult * idigit;

        ino = ino / 10;
    }
    return iMult;
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter number");
    scanf("%d",&ivalue);

    iret = MultDigits(ivalue);

    printf("%d",iret);

    return EXIT_SUCCESS;
}