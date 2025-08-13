//////////////////////////////////////////////////////
//
//  File name : Assingment23_5.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a character from user.
//                Display its ASCII value in decimal, octal and hexadecimal format.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : %o\n",ch);
    printf("Hexadecimal : 0X%x\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);   

    return 0;
}