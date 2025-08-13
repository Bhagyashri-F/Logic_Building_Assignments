//////////////////////////////////////////////////////
//
//  File name : Assingment23_2.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a character from user.
//                if character is small display its corresponding capital character and vice versa.
//                if character is not an alphabet display it as it is.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    int iDisplacement = 0;

    if((ch >= 'A') && (ch <= 'Z'))
    {
        iDisplacement = 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        iDisplacement = -32;
    }
    else
    {
        iDisplacement = 0;
    }

    printf("%c",ch + iDisplacement);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);   

    return 0;
}