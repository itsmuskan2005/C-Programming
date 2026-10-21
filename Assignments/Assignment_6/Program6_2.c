#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks,int iAge)
{
    if(fMarks < 0 || fMarks > 100 || iAge < 0)
    {
        printf("invalid input\n");
    }
    else if(fMarks >= 60 && iAge >= 17)
    {
        printf("eligible for admission\n");
    }
    else
    {
        printf("not eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("enter marks and age:");
    scanf("%f %d",&fMarks,&iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}