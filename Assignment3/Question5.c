//////////////////////////////////////////////////////
//
//  File name : Question5.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept number from user and check whether it is vowel or not
//  Date : 11/05/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<ctype.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char cVal)
{
    if((tolower(cVal) == 'a') || (tolower(cVal) == 'e') || (tolower(cVal) == 'i') || (tolower(cVal) == 'o') || (tolower(cVal) == 'u'))
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
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character : ");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not a Vowel\n");
    }

    return 0;
}