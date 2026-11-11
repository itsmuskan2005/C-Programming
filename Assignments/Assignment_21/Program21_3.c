#include<stdio.h>
#include<stdlib.h>

void Pattern(int irow,int icol)
{
    int i = 0,j = 0;

    for(i = 1;i <= irow;i++)
    {
        for(j = icol;j >= 1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;

    printf("enter number of rows and columns:\n");
    scanf("%d%d",&ivalue1,&ivalue2);

    Pattern(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}