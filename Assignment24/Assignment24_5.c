//////////////////////////////////////////////////////
//
//  File name : Assingment24_5.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a string from user.
//                Display it in reverse order.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Reverse(char *str)
{
    int iCnt = 0, iCount = 0;

    while(str[iCnt] != '\0')
    {
        iCount++;
        iCnt++;
    }

    for(iCnt = iCount - 1; iCnt >= 0; iCnt--)
    {
        printf("%c",str[iCnt]);
    }
}

int main()
{
    char Arr[50] = {'\0'};
    
    printf("Enter the string : \n");

    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}