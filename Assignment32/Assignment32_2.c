//////////////////////////////////////////////////////
//
//  File name : Assingmen32_2.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts number and position from user 
//                off the bit at that position and return modified number.
//  Date : 17/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
    UINT iAns = 0;
    UINT iMask = 1;

    iMask = iMask << (iPos - 1);

    iMask = ~(iMask);

    iAns = iNo & iMask;

    return iAns;
}

int main()
{
    UINT iValue1 = 0;
    int iValue2 = 0;
    UINT iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue1);

    printf("Enter the position : \n");
    scanf("%d",&iValue2);

    iRet = OffBit(iValue1, iValue2);

    printf("Modified number : %d\n",iRet);

    return 0;
}