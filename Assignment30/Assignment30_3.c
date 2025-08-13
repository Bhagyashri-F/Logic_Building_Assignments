//////////////////////////////////////////////////////
//
//  File name : Assingmen30_3.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which checks 7th, 15th, 21th, 28th bit is on or off.
//  Date : 16/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo)
{
    bool isOn = false;
    unsigned int iMask = 0;
    unsigned int iResult = 0;
    unsigned int iMask1 = 64;
    unsigned int iMask2 = 16384;
    unsigned int iMask3 = 1048576;
    unsigned int iMask4 = 134217728;

    iMask = iMask1 | iMask2 | iMask3 | iMask4;

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
        printf("7th, 15th, 21th, 28th bit is on\n");
    }
    else
    {
        printf("7th, 15th, 21th or 28th bit is off\n");
    }

    return 0;
}