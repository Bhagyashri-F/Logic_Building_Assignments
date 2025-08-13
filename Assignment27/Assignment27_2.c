//////////////////////////////////////////////////////
//
//  File name : Assingment27_2.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a string from user.
//                Copy contents of that string into another string.(Implement strncpy() function)
//                If third parameter is greater than size of source string then copy whole string into destination
//  Date : 23/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        dest++;
        src++;
        iCnt--;
    }
    *dest = '\0';
}

int main()
{
    char arr[50] = "Marvellous Multi  OS";
    char brr[50];

    StrNCpyX(arr,brr,10);

    printf("%s",brr);

    return 0;
}