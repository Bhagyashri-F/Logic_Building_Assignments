#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 10; iCnt >= 1; iCnt --)
    {
        printf("%d  ",iCnt*iNo);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}