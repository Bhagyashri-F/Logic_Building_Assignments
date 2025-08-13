//////////////////////////////////////////////////////
//
//  File name : Assingment24_1.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a string from user.
//                count number of capital characters.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountCap(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCap(Arr);

    printf("Number of capital characters : %d\n",iRet);

    return 0;
}