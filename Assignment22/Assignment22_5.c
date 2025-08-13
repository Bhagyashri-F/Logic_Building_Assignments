//////////////////////////////////////////////////////
//
//  File name : Assingment22_5.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept character from user and depends on division display time.
//                There are 4 divisions in School as A,B,C,D. 
//                Exam of division A is at 7AM, B at 8.30AM, C at 9.20AM and D at 10.30AM
//                (Application should be case sensitive)
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam is at 7AM\n");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam is at 8.30AM\n");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam is at 9.20AM\n");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam is at 10.30AM\n");
    }
    else
    {
        printf("You entered envalid choice\n");
    }
}

int main()
{
    char cValue  = '\0';

    printf("Enter the Division : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}