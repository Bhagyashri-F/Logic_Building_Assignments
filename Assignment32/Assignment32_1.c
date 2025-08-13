//////////////////////////////////////////////////////
//
//  File name : Assingmen32_1.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts number and position from user and check
//                bit at that position is on or off.
//  Date : 17/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(int iNo, int iPos)
{
    BOOL bAns = FALSE;
    int iMask = 1;

    iMask = iMask << (iPos - 1);

    if((iMask & iNo) == iMask)
    {
        bAns = TRUE;
    }

    return bAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : \n");
    scanf("%d",&iValue1);

    printf("Enter the position : \n");
    scanf("%d",&iValue2);

    bRet = CheckBit(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("%dth bit is on\n",iValue2);
    }
    else
    {
        printf("%dth bit is off\n",iValue2);
    }

    return 0;
}