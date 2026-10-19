#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int icnt = 0;
    //write updater
    while(icnt <= 5)
    {
        printf("*");
        icnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("enter number");
    scanf("%d",&iValue);
    
    Display(iValue);

    return EXIT_SUCCESS;

}