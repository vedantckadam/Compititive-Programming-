#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int iOdd=1;
    int iEven=2;
    for(int i=iRow;i>0;i--)
    {
        iEven=2;
        iOdd=1;

        for(int j=1;j<=iCol;j++)
        {
            if(i%2==1)
            {
                printf("%d\t",iEven);
                iEven=iEven+2;
            }
            else
            {
                printf("%d\t",iOdd);
                iOdd=iOdd+2;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}