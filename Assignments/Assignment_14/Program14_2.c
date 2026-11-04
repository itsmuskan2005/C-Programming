#include<stdio.h>
#include<stdlib.h>

int FactRev(int ino)
{
    int icnt = 0;

    for(icnt = ino/2; icnt >= 1; icnt--)
    {
        if(ino % icnt == 0)
        {
            printf("%d\t",icnt);
        }
    }
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter number");
    scanf("%d",&ivalue);

    iret = FactRev(ivalue);

    printf("%d",iret);

    return EXIT_SUCCESS;
}