//////////////////////////////////////////////////////
//
//  File name : Assingment23_3.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a character from user.
//                if character is capital display all characters from input till Z.
//                if character is small display all characters in reverse order till a.
//                otherwise return directly.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <='Z'))
    {
        while(ch <= 'Z')
        {
            printf("%c  ",ch++);
        }
    }
    else if((ch >= 'a') && (ch <='z'))
    {
        while(ch >= 'a')
        {
            printf("%c  ",ch--);
        }
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);   

    return 0;
}