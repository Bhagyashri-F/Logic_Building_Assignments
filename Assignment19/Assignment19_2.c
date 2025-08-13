//////////////////////////////////////////////////////
//
//  File name : Assingment19_2.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept N numbers from user and return difference between frequency of even numbers and odd numbers.
//  Date : 20/06/2025
//
//////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iCount1 = 0, iCount2 = 0, iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
    }

    iDiff = iCount1 - iCount2;
    
    return iDiff;
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

    iRet = Frequency(p, iSize);

    printf("Result is : %d \n",iRet);

    free(p);

    return 0;
}