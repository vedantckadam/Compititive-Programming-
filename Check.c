#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    bool bRet = false;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter number to search : ");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p, iSize, iValue);

    if(bRet == true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is absent");
    }

    free(p);

    return 0;
}