#include<stdio.h>
#include<stdlib.h>

void NonFact(int ino)
{
    int icnt = 0;

    for(icnt = 2; icnt < ino; icnt++)
    {
        if(ino % icnt != 0)
        {
            printf("%d\t",icnt);
        }
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number");
    scanf("%d",&ivalue);

    NonFact(ivalue);

    return EXIT_SUCCESS;
}