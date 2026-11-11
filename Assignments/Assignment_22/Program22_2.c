#include<stdio.h>
#include<stdlib.h>

void Pattern(int ino)
{
    int i = 0;

    for(i = ino;i >= 1;i--)
    {
       printf("%d\t#\t",i);
    }
    printf("\n");
}
int main()
{
    int ivalue = 0;

    printf("enter number of elements:\n");
    scanf("%d",&ivalue);

    Pattern(ivalue);

    return EXIT_SUCCESS;
}