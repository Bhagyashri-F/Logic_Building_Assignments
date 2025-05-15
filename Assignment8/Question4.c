#include<stdio.h>

double FhToCs(float fTemp)
{
    double dCs = 0.0;

    dCs = (fTemp - 32) * (5.0 /9.0);

    return dCs;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);
    printf("Temperature in Celsius is : %.4f",dRet);

    return 0;
}