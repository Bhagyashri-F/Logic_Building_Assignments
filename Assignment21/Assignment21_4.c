//////////////////////////////////////////////////////
//
//  File name : Assingment21_4.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept N numbers from user and display all such numbers which contains 3 digits in it.
//  Date : 21/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iNo = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        iCount = 0;
        while(iNo != 0)
        {
            iNo = iNo / 10;
            iCount++;
        }
        if(iCount == 3)
        {
            printf("%d  ",Arr[iCnt]);
        }
    }
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

    Digits(p, iSize);

    free(p);

    return 0;
}