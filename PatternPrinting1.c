#include<stdio.h>

void Pattern(int iNo)
{
    int iCount=0;
    char ch='A';
    for (iCount=1;iCount<=iNo;iCount++)
    {
        printf("%c\t",ch);
        ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}