//////////////////////////////////////////////////////
//
//  File name : Assingmen30_5.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which checks first(1) and last(32) bit is on or off.
//  Date : 17/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo)
{
    bool isOn = false;
    unsigned int iMask = 0;
    unsigned int iResult = 0;
    unsigned int iMask1 = 1;
    unsigned int iMask2 = 2147483648;

    iMask = iMask1 | iMask2;

    iResult = (iMask & iNo);

    if(iResult == iMask)
    {
        isOn = true;
    }

    return isOn;
}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("first(1) and last(32) bit is on\n");
    }
    else
    {
        printf("first(1) and last(32) bit is off\n");
    }

    return 0;
}