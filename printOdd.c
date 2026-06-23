#include<stdio.h>

void PrintOddNumbers(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt%2==1)
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

    PrintOddNumbers(iValue);

    return 0;
}