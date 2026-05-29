#include<stdio.h>

void Accept(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;
}