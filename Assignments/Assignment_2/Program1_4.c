#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
    int icnt = 0;
    //write update
    for(icnt = 0; icnt <= iFrequency; icnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int icount = 0;

    printf("enter number\n");
    scanf("%d",&iValue);

    printf("enter number\n");
    scanf("%d",&icount);

    Display(iValue,icount);

    return EXIT_SUCCESS;

}