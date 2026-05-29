#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iResult = 1;
    int iCount  = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 != 0)
    {
        iNo = iNo - 1;
    }

    iCount = iNo;
    while(iCount >= 2)
    {
        iResult = iResult * iCount;
        iCount  = iCount - 2;
    }

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet   = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return 0;
}
