#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1 > 0 && iSide2 > 0 && iSide3 > 0 &&(iSide1 + iSide2 > iSide3) && (iSide1 + iSide3 > iSide3) && (iSide2 + iSide3 > iSide1))
    {
        printf("valid triangle\n");
    }
    else
    {
        printf("invaliid triangle\n");
    }
}
int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("enter three sides:");
    scanf("%d %d %d",&iSide1,&iSide2,&iSide3);

    CheckTriangle(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}