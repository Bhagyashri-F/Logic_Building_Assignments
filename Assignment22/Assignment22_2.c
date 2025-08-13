//////////////////////////////////////////////////////
//
//  File name : Assingment22_2.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept character from user and check whether it is capital or not.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    BOOL bFlag = FALSE;

    if((ch >= 'A') && (ch <= 'Z'))
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
        bRet = ChkCapital(cValue);

        if(bRet == TRUE)
        {
            printf("It is a capital character\n");
        }
        else
        {
            printf("It is not a capital character\n");
        }
    }
    else
    {
        printf("It is not a alphabet\n");
    }
    

    return 0;
}