//////////////////////////////////////////////////////
//
//  File name : Assingment20_3.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept N numbers from user and accept another number as NO and return index of last occurance of NO.
//  Date : 20/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iInd = -1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iInd = iCnt;
        }
    }
    
    return iInd;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number elements : \n");
    scanf("%d",&iSize);

    printf("Enter number : \n");
    scanf("%d",&iValue);

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

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurance of element is : %d \n",iRet);
    }

    free(p);

    return 0;
}