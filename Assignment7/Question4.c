#include<stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt ++)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Odd Factorial is : %d\n",iRet);

    return 0;
}