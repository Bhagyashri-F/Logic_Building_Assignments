//////////////////////////////////////////////////////
//
//  File name : Question3.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo"
//  Date : 11/05/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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