#include<stdio.h>
#include<stdlib.h>

int RangeSum(int istart,int iend)
{
    int sum = 0;
 
    if(istart <= 0 || iend <= 0 || istart > iend)
    {
        return -1;
    }
    for(int i = istart;i <= iend;i++)
    {
        sum = sum + i;
    }
    return sum;
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
