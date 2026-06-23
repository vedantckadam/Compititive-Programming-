#include<stdio.h>

void CountEvenOddRange(int iNo)
{
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }

    printf("Even numbers : %d\n",iEven);
    printf("Odd numbers : %d\n",iOdd);
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    CountEvenOddRange(iValue);

    return 0;
}