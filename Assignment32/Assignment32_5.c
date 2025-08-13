//////////////////////////////////////////////////////
//
//  File name : Assingmen32_5.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts number and position from user 
//                update contents of first and last nibbles of number and return modified number.
//                nibble is group of 4 bits.
//  Date : 17/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iAns = 0;
    UINT iMask = 2576980377;

    iAns = iNo ^ iMask;

    return iAns;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified number : %d\n",iRet);

    return 0;
}