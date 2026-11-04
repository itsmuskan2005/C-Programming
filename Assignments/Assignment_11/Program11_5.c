#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int istart, int iend)
{
    int icnt = 0;

    if(istart > iend)
    {
        printf("invalid range\n");
        return;
    }
    for(icnt = iend; icnt >= istart; icnt--)
    {
        printf("%d\t",icnt);
    }
    printf("\n");
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;

    printf("enter starting point");
    scanf("%d",&ivalue1);

    printf("enter ending point");
    scanf("%d",&ivalue2);

    RangeDisplay(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}