//////////////////////////////////////////////////////
//
//  File name : Assingment18_1.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept N numbers from user and find out difference between summation of even numbers and summation of odd numbers.
//  Date : 20/06/2025
//
//////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, sumEven = 0, sumOdd = 0, diff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            sumEven = sumEven + Arr[iCnt];
        }
        else
        {
            sumOdd = sumOdd + Arr[iCnt];
        }
    }

    diff = sumEven - sumOdd;
    
    return diff;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize*(sizeof(int)));

    if(p == NULL)
    {
        printf("Unable to allocate memory : ");
        return -1;
    }

    printf("Enter %d number of elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iSize);

    printf("Result is %d \n",iRet);

    free(p);

    return 0;
}