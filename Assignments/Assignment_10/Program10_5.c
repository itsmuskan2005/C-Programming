#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int ivalue)
{
    double dMeter = 0.0;

    dMeter = ivalue * 0.0929;

    return dMeter;
}
int main()
{
    int ivalue = 0;
    double dret = 0.0;

    printf("enter area in squere feet");
    scanf("%d",&ivalue);

    dret = SquareMeter(ivalue);

    printf("area in square meter = %.6lf\n",dret);

    return EXIT_SUCCESS;
}