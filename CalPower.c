#include<stdio.h>

int CalculatePower(int iBase, int iExp)
{
    int iAns = 0;
    
    iAns = iBase * iExp;

    return iAns;
}

int main()
{
    int iBase = 0;
    int iExp = 0;
    int iRet = 0;

    printf("Enter Base : ");
    scanf("%d",&iBase);

    printf("Enter Exponent : ");
    scanf("%d",&iExp);

    iRet = CalculatePower(iBase,iExp);

    printf("Power is : %d\n",iRet);

    return 0;
}