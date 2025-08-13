//////////////////////////////////////////////////////
//
//  File name : Assingment27_5.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a 2 strings from user.
//                concate first second string after first string. (implement strcat() function).
//  Date : 23/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    while(*src != '\0')
    {
        src++;
    }
    while(*dest != '\0')
    {
        *src = *dest;
        dest++;
        src++;
    }
    *src = '\0';
}

int main()
{
    char arr[50] = "Marvellous Multi OS";
    char brr[50] = "Logic Building";

    StrCatX(arr,brr);

    printf("%s",arr);

    return 0;
}