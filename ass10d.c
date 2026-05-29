#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit  = 0;
    int iResult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit  = iNo % 10;
        iResult = iResult * iDigit;
        iNo     = iNo / 10;
    }

    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet   = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return 0;
}
