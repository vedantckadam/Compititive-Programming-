#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCount = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    iCount = iEnd;
    while(iCount >= iStart)
    {
        printf("%d ", iCount);
        iCount = iCount - 1;
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

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}
