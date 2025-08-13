//////////////////////////////////////////////////////
//
//  File name : Assingment24_3.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which accepts a string from user.
//                return difference between frequency of small characters and frequency of capital characters.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(char *str)
{
    int iCountSmall = 0, iCountCap = 0, iDiff = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        str++;
    }

    iDiff = iCountSmall - iCountCap;

    return iDiff;
}

int main()
{
    int iRet = 0;
    char Arr[50] = {'\0'};
    
    printf("Enter the string : \n");

    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("Difference between frequency of small and frequency of capital characters : %d\n",iRet);

    return 0;
}