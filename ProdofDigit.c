#include<stdio.h>

int ProductOfDigits(int iNo)
{
    int iDigit = 0;
    int iProduct = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iProduct = iProduct * iDigit;
        iNo = iNo / 10;
    }

    return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = ProductOfDigits(iValue);

    printf("Product of digits is : %d\n",iRet);

    return 0;
}