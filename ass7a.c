#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iCount = 1;
    while(iCount <= iNo)
    {
        printf("* ");
        iCount = iCount + 1;
    }

    iCount = 1;
    while(iCount <= iNo + 1)
    {
        printf("# ");
        iCount = iCount + 1;
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
