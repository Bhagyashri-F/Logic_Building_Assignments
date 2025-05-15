//////////////////////////////////////////////////////
//
//  File name : Question1.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept number from user and print that number of even numbers on screen
//  Date : 11/05/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d  ",iCnt*2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}