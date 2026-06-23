#include<stdio.h>

void CheckDivisible(int iNo)
{
    if(iNo%5==0 && iNo%11==0)
    {
        printf("%d is divisible by 5 and 11 \n",iNo);
    }
    else
    {
        printf("%d is not divisible by 5 and 11 \n",iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    CheckDivisible(iValue);

    return 0;
}