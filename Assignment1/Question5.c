//////////////////////////////////////////////////////
//
//  File name : Question5.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept one number from user and print that number of * on screen
//  Date : 10/05/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo1)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo1;iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;
    Accept(iValue);

    return 0;
}