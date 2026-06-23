#include<stdio.h>

void CheckSign(int iNo)
{
    if(iNo>0)
    {
        printf("its Negative \n");
    }
    else if (iNo==0)
    {
        printf("Its Zero");
    }
    else if(iNo>0)
    {
        printf("Its negative");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckSign(iValue);

    return 0;
}