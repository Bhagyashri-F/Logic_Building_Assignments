//////////////////////////////////////////////////////
//
//  File name : Assingment26_3.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a string from user.
//                Accept one character and return index of first occurance of that character.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            break;
        }
        iCount++;
        str++;
    }

    if(*str == '\0')
    {
        iCount = -1;
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

    iRet = FirstChar(Arr, cValue);

    if(iRet == -1)
    {
        printf("Character not Found.\n");
    }
    else
    {
        printf("Index of first appearance of character : %d\n",iRet);
    }

    return 0;
}