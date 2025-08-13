//////////////////////////////////////////////////////
//
//  File name : Assingmen30_4.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which checks 7th, 8th, 9th bit is on or off.
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
    unsigned int iMask1 = 64;
    unsigned int iMask2 = 128;
    unsigned int iMask3 = 256;

    iMask = iMask1 | iMask2 | iMask3;

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
        printf("7th, 8th, 9th bit is on\n");
    }
    else
    {
        printf("7th, 8th or 9th bit is off\n");
    }

    return 0;
}