#include<stdio.h>
#include<stdlib.h>

void Display(int ino)
{
    int icnt = 0;

    if(ino < 0)
    {
        ino = -ino;
    }

    for(icnt = 1; icnt <= ino; icnt++)
    {
        printf("*\t");
    }

    for(icnt = 1; icnt <= ino; icnt++)
    {
        printf("#\t");
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number");
    scanf("%d",&ivalue);

    Display(ivalue);

    return EXIT_SUCCESS;
}