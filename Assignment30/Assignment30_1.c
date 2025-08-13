//////////////////////////////////////////////////////
//
//  File name : Assingmen30_1.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which checks 15th bit is on or off.
//  Date : 16/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo)
{
    bool isOn = false;
    unsigned int iResult = 0;
    unsigned int iMask = 16384;

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
        printf("15th bit is on\n");
    }
    else
    {
        printf("15th bit is off\n");
    }

    return 0;
}