//////////////////////////////////////////////////////
//
//  File name : Assingment24_2.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a string from user.
//                count number of small characters.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr);

    printf("Number of small characters : %d\n",iRet);

    return 0;
}