#include<stdio.h>
#include<stdlib.h>

int Multiply(int ino1,int ino2,int ino3)
{
    int iMult = 0;
    
    //handle condition if number is 0
    if(ino1 == 0 || ino2 == 0 || ino3 == 0)
    {
        return 0;
    }

    //logic
    iMult = ino1 * ino2 * ino3;

    return iMult;
}
int main()
{
    int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0, iret = 0;

    printf("please enter three numbers");
    scanf("%d%d%d",&ivalue1,&ivalue2,&ivalue3);

    iret = Multiply(ivalue1,ivalue2,ivalue3);

    printf("multiplication is :%d",iret);

    return EXIT_SUCCESS;
}