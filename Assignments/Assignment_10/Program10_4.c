#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float ftemp)
{
    double dCelsius = 0.0;

    dCelsius = (ftemp - 32) * (5.0 / 9.0);

    return dCelsius;
}
int main()
{
    float fvalue = 0.0f;
    double dret = 0.0;

    printf("enter temperature in fahrenheit");
    scanf("%d",&fvalue);

    dret = FhtoCs(fvalue);

    printf("temperature in celsius = %d\n",dret);
    return EXIT_SUCCESS;
}