#include<stdio.h>
#include<stdlib.h>

void pattern(int ino)
{
    int icnt = 0;

    for(icnt = 1;icnt <= ino;icnt++)
    {
        printf("$\t*\t");
    }

    printf("\n");
    
}
int main()
{
    int ivalue = 0;

    printf("enter number\n");
    scanf("%d",&ivalue);
    
    pattern(ivalue);

    return EXIT_SUCCESS;
}
