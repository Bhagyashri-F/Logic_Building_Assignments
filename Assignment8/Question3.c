#include<stdio.h>
#define PI 3.14f

int KMtoMeter(int iKM)
{
    int iMeter = 0;
    iMeter = iKM * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in KM : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("Distance in meter is : %d",iRet);

    return 0;
}