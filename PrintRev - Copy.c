#include<stdio.h>

void PrintReverse(int iNo)
{
    int iCnt = 0;

    for(iCnt =iNo;iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    PrintReverse(iValue);

    return 0;
}