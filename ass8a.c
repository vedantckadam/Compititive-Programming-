#include<stdio.h>

double CircleArea(float fRadius)
{
    double dResult = 0.0;
    dResult = 3.14 * fRadius * fRadius;
    return dResult;
}

int main()
{
    float  fValue = 0.0;
    double dRet   = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf\n", dRet);

    return 0;
}
