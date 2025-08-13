//////////////////////////////////////////////////////
//
//  File name : Assingment20_5.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept N numbers from user and return product of all odd elements.
//  Date : 20/06/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iProduct = 1;

    printf("Output : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }
    return iProduct;
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

    iRet = Product(p, iSize);

    printf("Product is : %d \n",iRet);

    free(p);

    return 0;
}