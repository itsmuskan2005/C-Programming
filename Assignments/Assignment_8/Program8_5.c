#include<stdio.h>
#include<stdlib.h>

void tablerev(int ino)
{
    int icnt = 0;
    for(icnt = 10; icnt >= 1; icnt--)
    {
        printf("%d\t",ino * icnt);
    }
}
int main()
{
    int ivalue = 0;

    printf("enter number");
    scanf("%d",&ivalue);

    tablerev(ivalue);

    return EXIT_SUCCESS;
}