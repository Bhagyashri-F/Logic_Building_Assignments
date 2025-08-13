//////////////////////////////////////////////////////
//
//  File name : Assingment25_5.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a string from user.
//                count number of white spaces in it.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    
    return iCount;
}

int main()
{
    int iRet = 0;
    char Arr[50] = {'\0'};
    
    printf("Enter the string : \n");

    scanf("%[^'\n']s",Arr);

    iRet = CountWhite(Arr);

    printf("Number of white spaces : %d\n",iRet);

    return 0;
}