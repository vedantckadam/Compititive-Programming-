#include<stdio.h>

void CheckLeapYear(int iYear)
{
    if(iYear%4==0)
    {
        printf("%d is a Leap Year \n",iYear);
    }
    else
    {
        printf("%d is not a Leap Year \n",iYear);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Year : ");
    scanf("%d",&iValue);

    CheckLeapYear(iValue);

    return 0;
}