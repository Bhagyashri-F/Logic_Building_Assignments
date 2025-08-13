//////////////////////////////////////////////////////
//
//  File name : Assingment20_1.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept N numbers from user and accept another number as NO and check whether NO is present or not.
//  Date : 20/06/2025
//
//////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = TRUE;
            break;
        }
    }
    
    return bFlag;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    BOOL bRet = FALSE;
    int *p = NULL;

    printf("Enter number elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number : \n");
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

    bRet = Check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is not present\n");
    }

    free(p);

    return 0;
}