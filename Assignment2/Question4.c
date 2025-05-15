//////////////////////////////////////////////////////
//
//  File name : Question4.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept two numbers from user and display first number in second number of times
//  Date : 11/05/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    //write updater
    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d ",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter Frequency : ");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}