#include<stdio.h>
#include<stdlib.h>

void oddDisplay(int ino)
{
    int icnt = 0;

    for(icnt = 1;icnt <= ino;icnt = icnt+2)
    {
        printf("%d\t",icnt);
    }

    printf("\n");
    
}
int main()
{
    int ivalue = 0;

    printf("enter number\n");
    scanf("%d",&ivalue);
    
    oddDisplay(ivalue);

    return EXIT_SUCCESS;
}