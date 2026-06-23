#include<stdio.h>

void SumEvenOddDigits(int iNo)
{
    int iCnt=0;
    int iEvenSum=0;
    int iOddSum=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if (iCnt%2==0)
        {
            iEvenSum=iEvenSum+iCnt;
        }

        else if(iCnt%2==1)
        {
            iOddSum=iOddSum+iCnt;
        }

        printf("Sum of Even : %d ",iEvenSum);
        printf("Sum of Odd : %d ",iOddSum);

    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    SumEvenOddDigits(iValue);

    return 0;
}