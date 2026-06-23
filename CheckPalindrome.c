#include<stdio.h>

void CheckPalindrome(int iNo)
{
    int iRev=0;
    int iTemp=iNo;
    int iRev=0;
    
    while(iNo!=0)
    {
        iRev = (iRev * 10) + (iNo % 10);
        iNo = iNo / 10;
    }
    
    if(iTemp==iRev)
    {
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Number is not Palindrome\n");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    CheckPalindrome(iValue);

    return 0;
}