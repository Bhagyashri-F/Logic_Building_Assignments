//////////////////////////////////////////////////////
//
//  File name : Question5.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept number from user and check whether it is even or odd
//  Date : 11/05/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 ==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd number");
    }

    return 0;
}