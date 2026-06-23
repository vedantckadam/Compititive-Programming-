#include<stdio.h>

void DisplayGrade(int iMarks)
{
    if(iMarks >= 75)
    {
        printf("A\n");
    }
    else if(iMarks >= 60)
    {
        printf("B\n");
    }
    else if(iMarks >= 50)
    {
        printf("C\n");
    }
    else if(iMarks >= 35)
    {
        printf("Pass Class\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Marks : ");
    scanf("%d",&iValue);

    DisplayGrade(iValue);

    return 0;
}