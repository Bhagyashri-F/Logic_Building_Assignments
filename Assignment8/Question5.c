#include<stdio.h>
#define PI 3.14f

double SquareMeter(float fSqFeet)
{
    double dSqMeter = 0.0;
    dSqMeter = fSqFeet * 0.0929;

    return dSqMeter;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);
    printf("Area in square meter is : %f",dRet);

    return 0;
}