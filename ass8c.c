#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iResult = 0;
    iResult = iNo * 1000;
    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet   = 0;

    printf("Enter distance in km: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is %d\n", iRet);

    return 0;
}
