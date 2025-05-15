//////////////////////////////////////////////////////
//
//  File name : Question1.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Program to divide two numbers
//  Date : 10/05/2025
//
//////////////////////////////////////////////////////

/*
    Start
        Take Two numbers as hardcoded values 
            if second number is 0
                return -1
            calculate answer as first no divided by second no
            return answer
    Stop
*/

#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1/iNo2;
    return iAns;
}

int main()
{
    int iValue1 =15, iValue2 = 5;
    int iRet = 0;
    iRet = Divide(iValue1, iValue2);
    printf("Division is %d",iRet);

    return 0;
}