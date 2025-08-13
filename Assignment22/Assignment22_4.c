//////////////////////////////////////////////////////
//
//  File name : Assingment22_4.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept character from user and check whether it is small case or not.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= 'a') && (ch <= 'z'))
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

    if(((cValue >= 'A') && (cValue <= 'Z')) || ((cValue >= 'a') && (cValue <= 'z')))
    {
        bRet = ChkSmall(cValue);

        if(bRet == TRUE)
        {
            printf("It is a small case character\n");
        }
        else
        {
            printf("It is not a small case character\n");
        }
    }
    else
    {
        printf("It is not a alphabet\n");
    }
    

    return 0;
}