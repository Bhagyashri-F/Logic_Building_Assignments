//////////////////////////////////////////////////////
//
//  File name : Assingment20_4.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept N numbers from user and accept range , Display all elements from that range.
//  Date : 20/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0, iInd = -1;

    printf("Output : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && Arr[iCnt] <= iEnd)
        {
            printf("%d  ",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number elements : \n");
    scanf("%d",&iSize);

    printf("Enter starting point : \n");
    scanf("%d",&iValue1);

    printf("Enter ending point : \n");
    scanf("%d",&iValue2);

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

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}