//////////////////////////////////////////////////////
//
//  File name : Assingment23_1.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write a program which displays ASCII table.
//                Table contains symbol, decimal and octal representation of every number from 0 to 255.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int iCnt = 0;
    printf("Symbol| Decimal | Octal\n");
    for(iCnt = 0; iCnt < 256; iCnt++)
    {
        printf("%c      |    %d    | %o \n",iCnt,iCnt,iCnt);
    }
}

int main()
{
    DisplayASCII();   

    return 0;
}