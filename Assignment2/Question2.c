//////////////////////////////////////////////////////
//
//  File name : Question2.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept one number from user and print that number of * on screen
//  Date : 11/05/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    //write updater
    while(iNo>0)
    {
        printf("*");
        iNo--;
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