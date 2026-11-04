#include<stdio.h>
#include<stdlib.h>

int SumNonFact(int ino)
{
    int icnt = 0;
    int isum = 0;

    for(icnt = 2; icnt < ino; icnt++)
    {
        if(ino % icnt != 0)
        {
            isum = isum + icnt;
        }
    }
    return isum;
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter number");
    scanf("%d",&ivalue);

    iret = SumNonFact(ivalue);

    printf("%d",iret);

    return EXIT_SUCCESS;
}