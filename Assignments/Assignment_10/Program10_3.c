#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int ino)
{
    int iMeter = 0;
  
    iMeter = ino * 1000;

    return iMeter;
}
int main()
{
    int ivalue = 0,iret = 0;

    printf("enter distance");
    scanf("%d",&ivalue);

    iret = KMtoMeter(ivalue);

    printf("distance in meter = %d\n",iret);
    
    return EXIT_SUCCESS;
}