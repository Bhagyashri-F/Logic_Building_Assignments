#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1, iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(int iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial is : %d\n",iRet);

    return 0;
}