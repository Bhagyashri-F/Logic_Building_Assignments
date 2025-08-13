//////////////////////////////////////////////////////
//
//  File name : Assignment22_3.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept character from user and check whether it is digit or not.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckDigit(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= '0') && (ch <= '9'))
    {
        bFlag = TRUE;
    }

    return bFlag;
}

int main()
{
    char cValue  = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = CheckDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("It is not a digit\n");
    }

    return 0;
}