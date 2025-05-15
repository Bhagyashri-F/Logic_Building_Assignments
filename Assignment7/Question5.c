#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iEvenFact = 1, iCnt = 0, iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if((iCnt % 2) != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }

    return (iEvenFact - iOddFact);
}

int main()
{
    int iValue = 0, iRet;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff (iValue);
    printf("Difference between even and odd Factorial is : %d\n",iRet);

    return 0;
}