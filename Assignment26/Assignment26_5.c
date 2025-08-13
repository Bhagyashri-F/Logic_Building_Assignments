//////////////////////////////////////////////////////
//
//  File name : Assingment26_5.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a string from user.
//                Reverse that string in place.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void strRevx(char *str)
{
    int iCount = 0, iCnt = 0;
    char strcp[50] = {'\0'};

    while(*str != '\0')
    {
        strcp[iCount] = *str;
        iCount++;
        str++;
    }

    str--;

    for(iCnt = 0; iCnt < iCount; iCnt++,str--)
    {
        *str = strcp[iCnt];
    }
}

int main()
{
    int iRet = 0;
    char Arr[50] = {'\0'}, cValue = '\0';
    
    printf("Enter the string : \n");

    scanf("%[^'\n']s",Arr);

    strRevx(Arr);

    printf("Modified string : %s\n",Arr);

    return 0;
}