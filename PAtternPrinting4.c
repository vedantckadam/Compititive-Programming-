/*
Input : 4
Output :
# 1 * # 2 * # 3 * # 4 *
*/

/*
Input : 5
Output :
1 * 2 * 3 * 4 * 5 *
*/


#include<stdio.h>

void Pattern(int iNo)
{
    int iCount=0;
    for (iCount=1;iCount<=iNo;iCount++)
    {
        printf("#  %d  * \t",iCount);
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