#include<stdio.h>
#include<stdlib.h>

void multipleDisplay(int ino)
{
    int icnt = 0;

    for(icnt = 1;icnt <= 5;icnt++)
    {
        printf("%d\t",ino * icnt);
    }

    printf("\n");
    
}
int main()
{
    int ivalue = 0;

    printf("enter number\n");
    scanf("%d",&ivalue);
    
    multipleDisplay(ivalue);

    return EXIT_SUCCESS;
}