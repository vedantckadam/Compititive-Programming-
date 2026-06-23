#include<stdio.h>

void PrintDivisibleBy2And3(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2 == 0) && (iCnt % 3 == 0))
        {
            printf("%d\t",iCnt);
        }
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    PrintDivisibleBy2And3(iValue);

    return 0;
}