//////////////////////////////////////////////////////
//
//  File name : Assingment26_2.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a string from user.
//                Accept one character and return frequency of that character.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    
    return iCount;
}

int main()
{
    int iRet = 0;
    char Arr[50] = {'\0'}, cValue = '\0';
    
    printf("Enter the string : \n");

    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");

    scanf(" %c",&cValue);

    iRet = CountChar(Arr, cValue);

    printf("Character appears %d times.\n",iRet);

    return 0;
}