#include<stdio.h>

void CheckPrime(int iNo)
{
    int iCnt=0;

    if(iNo==1)
    {
        prinf("Prime Number \n");
    }

    for(iCnt=2;iCnt<iNo;iNo++)
    {
        if(iNo%iCnt==0)
        {
            break;
        }
    }

    if(iCnt==iNo)
    {
        printf("%d is a prime number ");
    }
    else
    {
        printf("its not a prime Number ");
    }

}


int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckPrime(iValue);

    return 0;
}