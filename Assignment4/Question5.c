#include<stdio.h>

int DiffFact(int iNo)
{
    int iCnt = 0, iSumFact = 0, iSumNonFact = 0;
    if(iNo < 0)
    {
        iNo = - iNo;
    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSumNonFact += iCnt;
        }
        else
        {
            iSumFact += iCnt;
        }
    }
    return (iSumNonFact - iSumFact);
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = DiffFact(iValue);
    printf("Difference between factors and Non Factors is : %d\n",iRet);

    return 0;
}