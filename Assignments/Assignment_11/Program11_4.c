#include<stdio.h>
#include<stdlib.h>

int RangeSum(int istart,int iend)
{
    int icnt = 0;
    int isum = 0;
 
    if(istart <= 0 || iend <= 0 || istart > iend)
    {
        return -1;
    }
    for(icnt = istart;icnt <= iend;icnt++)
    {
        if(icnt % 2 == 0)
        {
            isum = isum + icnt;
        }
    }
    return isum;
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0,iret = 0;

    printf("enter starting point");
    scanf("%d",&ivalue1);

    printf("enter ending point");
    scanf("%d",&ivalue2);

    iret = RangeSum(ivalue1, ivalue2);

    printf("addition is %d",iret);

    return EXIT_SUCCESS;
}
