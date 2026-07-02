#include<stdio.h>

void Pattern(int iNo)
{
    int iCount=0;
    for (iCount=iNo;iCount>0;iCount--)
    {
        printf("%d  #\t",iCount);
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