#include<stdio.h>

int SumEvenNumbers(int iNo)
{
    int iCnt=0;
    int iEvenSum=0;

    for(iCnt=0;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
        iEvenSum=iEvenSum+iCnt;
        }
    }

    return iEvenSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumEvenNumbers(iValue);

    printf("Sum of even numbers is : %d\n",iRet);

    return 0;
}