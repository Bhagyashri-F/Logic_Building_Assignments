//////////////////////////////////////////////////////
//
//  File name : Question4.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept one character from user and convert case of that character
//  Date : 11/05/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include <ctype.h>

void DisplayConvert(char cValue)
{
    if(isupper(cValue))
    {
        printf("%c  ",tolower(cValue));
    }
    else if(islower(cValue))
    {
        printf("%c  ",toupper(cValue));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}