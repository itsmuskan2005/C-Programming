#include<stdio.h>
#include<stdlib.h>

void table(int ino)
{
    int icnt = 0;

    for(icnt = 1; icnt <= 10; icnt++)
    {
        printf("%d\t",ino * icnt);
    }

}
int main()
{
    int ivalue = 0;

    printf("enter number");
    scanf("%d",&ivalue);

    table(ivalue);

    return EXIT_SUCCESS;
}