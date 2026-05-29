#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCount = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    iCount = iStart;

    if(iCount % 2 != 0)
    {
        iCount = iCount + 1;
    }

    while(iCount <= iEnd)
    {
        printf("%d ", iCount);
        iCount = iCount + 2;
    }

    printf("\n");
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}
