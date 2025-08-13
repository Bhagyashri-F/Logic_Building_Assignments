//////////////////////////////////////////////////////
//
//  File name : Assingment23_4.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a character from user.
//                Check whether it is special symbol or not.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Display(char ch)
{
    BOOL bFlag = TRUE;

    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')) || ((ch >= '0') && (ch <= '9')))
    {
        bFlag = FALSE;
    }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = Display(cValue);   

    if(bRet == TRUE)
    {
        printf("It is a special symbol\n");
    }
    else
    {
        printf("It is not a special symbol\n");
    }

    return 0;
}