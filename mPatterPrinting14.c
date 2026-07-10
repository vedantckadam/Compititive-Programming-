#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    char ch='A';
    for(int i=iRow;i>0;i--,ch++)
    {
        char ch='a';
        for(int j=1;j<=iCol;j++)
        {
            printf("%c",ch);
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