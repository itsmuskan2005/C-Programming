#include<stdio.h>
#include<stdlib.h>

double RectArea(float fwidth, float fheight)
{
    double dArea = 0.0f;

    dArea = fwidth * fheight;

    return dArea;
}
int main()
{
    float fvalue1 = 0.0f, fvalue2 = 0.0f;
    double dret = 0.0;

    printf("enter width");
    scanf("%f",&fvalue1);

    printf("enter height");
    scanf("%f",&fvalue2);

    dret = RectArea(fvalue1, fvalue2);

    printf("area of rectangle = %.4lf\n",dret);

    return EXIT_SUCCESS;
}