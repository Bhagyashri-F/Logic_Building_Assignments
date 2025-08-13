//////////////////////////////////////////////////////
//
//  File name : Assingment27_3.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a string from user.
//                Copy capital characters of that string into another string.
//  Date : 23/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[50] = "Marvellous Multi  OS";
    char brr[50];

    StrCpyCap(arr,brr);

    printf("%s",brr);

    return 0;
}