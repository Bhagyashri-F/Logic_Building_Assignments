//////////////////////////////////////////////////////
//
//  File name : Assingment22_1.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept character from user and check whether it is alphabet or not.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char ch)
{
    BOOL bFlag = FALSE;

    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
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

    bRet = CheckAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is a character\n");
    }
    else
    {
        printf("It is not a character\n");
    }

    return 0;
}