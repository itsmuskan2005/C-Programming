#include<stdio.h>
#include<stdlib.h>

int factorial(int ino)
{
    int ifact = 1;

    if(ino < 0)
    {
        ino = -ino;
    }

    for(int i = 1; i <= ino; i++)
    {
       ifact = ifact * i;
    }
    return ifact;

}
int main()
{
    int ivalue = 0, iret = 0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    iret = factorial(ivalue);

    printf("factorial of number is %d",iret);
    
    return EXIT_SUCCESS;
}