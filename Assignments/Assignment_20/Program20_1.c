#include<stdio.h>
#include<stdlib.h>

void Pattern(int irow,int icol)
{
    int i = 0,j = 0;

    for(i = 0;i <= irow;i++)
    {
        for(j = 0;j <= icol;j++)
        {
            if(i + j == icol - 1)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0;

    printf("enter number of rows aand columns:\n");
    scanf("%d%d",&ivalue1,&ivalue2);

    Pattern(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}