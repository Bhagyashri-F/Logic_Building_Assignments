//////////////////////////////////////////////////////
//
//  File name : Assingment26_1.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a string from user.
//                Accept one character and check whether that character is present in that string or not.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = TRUE;
            break;
        }
        str++;
    }
    
    return bFlag;
}

int main()
{
    BOOL bRet = FALSE;
    char Arr[50] = {'\0'}, cValue = '\0';
    
    printf("Enter the string : \n");

    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");

    scanf(" %c",&cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character is present.\n");
    }
    else
    {
        printf("Character is not present.\n");
    }

    return 0;
}