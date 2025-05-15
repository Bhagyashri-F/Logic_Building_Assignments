#include<stdio.h>

int MultFact(int iNo)
{
    int iMul = 1;
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("Multiplication of factors is : %d",iRet);

    return 0;
}