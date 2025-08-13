//////////////////////////////////////////////////////
//
//  File name : Assingment24_4.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a string from user.
//                Check whether string contains vowel or not.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'A') || (*str == 'e') || (*str == 'E') || (*str == 'i') || (*str == 'I') || (*str == 'o') || (*str == 'O') || (*str == 'u') || (*str == 'U'))
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
    char Arr[50] = {'\0'};
    
    printf("Enter the string : \n");

    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("Vowel is present.\n");
    }
    else
    {
        printf("Vowel is not present.\n");
    }

    return 0;
}