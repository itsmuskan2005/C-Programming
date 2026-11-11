#include<stdio.h>
#include<stdlib.h>

void Pattern(int ino)
{
    int i = 0;
    char ch = 'A';

    for(i = 1;i <= ino;i++,ch++)
    {
       printf("%c\t",ch);
    }
    printf("\n");
}
int main()
{
    int ivalue1 = 0;

    printf("enter number of elements:\n");
    scanf("%d",&ivalue1);

    Pattern(ivalue1);

    return EXIT_SUCCESS;
}