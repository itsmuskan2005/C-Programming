#include<stdio.h>
#include<stdlib.h>

int MultFact(int ino)
{
    int icnt = 0;
    int iMult = 1;

    for(icnt = 1; icnt <= ino/2; icnt++)
    {
        if(ino % icnt == 0)
        {
            iMult = iMult * icnt;
        }
    }
    return iMult;
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter number");
    scanf("%d",&ivalue);

    iret = MultFact(ivalue);

    printf("%d",iret);

    return EXIT_SUCCESS;
}