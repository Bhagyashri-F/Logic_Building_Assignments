//////////////////////////////////////////////////////
//
//  File name : Assingment18_4.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Accept N numbers from user and display elements which are divisible by 3 and 5.
//  Date : 20/06/2025
//
//////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Output : ");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(((Arr[iCnt] % 5) == 0) && ((Arr[iCnt] % 3) == 0))
        {
            printf("%d  ",Arr[iCnt]);
        }
    }

    printf("\n");
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    Display(p, iSize);

    free(p);

    return 0;
}