#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCount  = 0;
    int iResult = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        printf("Invalid range\n");
        return -1;
    }

    iCount = iStart;

    if(iCount % 2 != 0)
    {
        iCount = iCount + 1;
    }

    while(iCount <= iEnd)
    {
        iResult = iResult + iCount;
        iCount  = iCount + 2;
    }

    return iResult;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet    = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet != -1)
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}
