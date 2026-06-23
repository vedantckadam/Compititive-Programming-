#include<stdio.h>

void CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=iNo;iCnt==0;iCnt--)
    {
        printf("%d",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckPerfect(iValue);

    return 0;
}