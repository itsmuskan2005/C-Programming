#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fradius)
{
    double dArea = 0.0f;

    dArea = 3.14 * fradius * fradius;

    return dArea;
}
int main()
{
    float fvalue = 0.0f;
    double dret = 0.0;

    printf("enter radius");
    scanf("%f",&fvalue);

    dret = CircleArea(fvalue);

    printf("area of circle = %.4lf\n",dret);

    return EXIT_SUCCESS;
}