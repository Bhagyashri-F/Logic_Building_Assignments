//////////////////////////////////////////////////////
//
//  File name : Assingmen31_3.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts number from user and toggle its 7th bit and return modified number.
//  Date : 17/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iAns = 0;

    UINT iMask = 64;

    iAns = iNo ^ iMask;

    return iAns;
}

int main()
{
    UINT iRet = 0;
    UINT iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified value is : %d\n",iRet);

    return 0;
}