//////////////////////////////////////////////////////
//
//  File name : Assingment21_3.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept N numbers from user and return difference between smallest and largest number.
//  Date : 20/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iMin = 0, iCnt = 0, iMax = 0, iDiff = 0;

    iMin = Arr[0];
    iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
        else if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }

    }

    iDiff = iMax - iMin;

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

    iRet = Difference(p, iSize);

    printf("Difference is : %d \n",iRet);

    free(p);

    return 0;
}