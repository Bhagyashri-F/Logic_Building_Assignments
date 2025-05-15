//////////////////////////////////////////////////////
//
//  File name : Question1.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept one number from user and print that number of * on screen
//  Date : 11/05/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //write updater
    while(iCnt<iNo)
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}