#include<stdio.h>
#include<stdlib.h>

void number(int ino)
{
    if(ino < 50)
    {
        printf("small");
    }
    else if(ino > 50 && ino <100)
    {
        printf("medium");
    }
    else if(ino > 100)
    {
        printf("larger");
    }
    else
    {
        printf("number is 50 or 100");
    }
    
}
int main()
{
    int ivalue = 0;

    printf("enter number\n");
    scanf("%d",&ivalue);
    
    number(ivalue);

    return EXIT_SUCCESS;
}