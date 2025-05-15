#include<stdio.h>

int DollarToINR(int iNo)
{
    int iDollar = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    iDollar = iNo * 70;
    return iDollar;
}

int main()
{
    int iValue = 0, iRet;
    
    printf("Enter Number of USD: ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("%d$ value in INR : %d",iValue,iRet);

    return 0;
}