#include<stdio.h>
#include<stdlib.h>

float Percentage(int itotal,int iobtained)
{
    float fper = 0.0f;

    if(itotal == 0)
    {
        return 0.0f;
    }
    
    fper = ((float)iobtained / itotal)* 100;

    return fper;
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0;
    float fret = 0.0f;

    printf("please enter total marks :\n");
    scanf("%d",&ivalue1);

    printf("please enter obtained marks :\n");
    scanf("%d",&ivalue2);

    fret = Percentage(ivalue1,ivalue2);

    printf("percentage is :%.1f%%\n",fret);

    return EXIT_SUCCESS;
}