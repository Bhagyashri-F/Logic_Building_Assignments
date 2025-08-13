//////////////////////////////////////////////////////
//
//  File name : Assingment27_1.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a string from user.
//                Copy contents of that string into another string.(Implement strcpy() function)
//  Date : 23/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[50] = "Marvellous Multi  OS";
    char brr[50];

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;
}