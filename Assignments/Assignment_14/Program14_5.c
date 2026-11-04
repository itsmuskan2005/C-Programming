#include<stdio.h>
#include<stdlib.h>

int FactNonFactDiff(int ino)
{
    int icnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    for(icnt = 1; icnt < ino; icnt++)
    {
        if(ino % icnt == 0)
        {
            iFactSum = iFactSum + icnt;
        }
        else
        {
            iNonFactSum = iNonFactSum + icnt;
        }
    }
    return(iFactSum-iNonFactSum);
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter number");
    scanf("%d",&ivalue);

    iret = FactNonFactDiff(ivalue);

    printf("%d\n",iret);

    return EXIT_SUCCESS;
}