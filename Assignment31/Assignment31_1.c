//////////////////////////////////////////////////////
//
//  File name : Assingmen31_1.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts number from user and off its 7th bit if it is on and return modifiesd number.
//  Date : 17/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iAns = 0;

    UINT iMask = 64;

    iMask = ~(iMask);

    iAns = iNo & iMask;

    return iAns;
}

int main()
{
    UINT iRet = 0;
    UINT iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Modified value is : %d\n",iRet);

    return 0;
}