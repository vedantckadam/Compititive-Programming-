#include<stdio.h>

void PrintEvenNumbers(int iNo)
{
   int iCnt=0;
   for(iCnt=2;iCnt<=iNo;iCnt++)
   {
    if(iCnt%2==0)
    {
        printf("%d \n");
    }
   }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    PrintEvenNumbers(iValue);

    return 0;
}