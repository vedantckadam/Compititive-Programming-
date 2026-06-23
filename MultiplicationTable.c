#include<stdio.h>

void PrintTable(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10;iCnt++)
    {
        printf("%d\t",iNo*iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    PrintTable(iValue);

    return 0;
}