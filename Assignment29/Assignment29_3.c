//////////////////////////////////////////////////////
//
//  File name : Assingment29_3.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write application which accepts file name and return number of white spaces from that file.
//  Date : 13/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

int CountWhite(char * Fname)
{
    int fd = 0;
    int iCnt = 0;
    int data = 0;
    int iCount = 0;
    char Buffer[1024] = {'\0'};

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Empty file\n");
        return -1;
    }
    else
    {
        while((data = read(fd,Buffer,10)) != 0)
        {
            for(iCnt = 0; iCnt < data; iCnt++)
            {
                if(Buffer[iCnt] == ' ')
                {
                    iCount++;
                }
            }
        }
        close(fd);
    }

    return iCount;
}

int main()
{
    int iRet = 0;
    char Fname[50] = {'\0'};

    printf("Enter file name : \n");
    scanf("%s",Fname);

    iRet = CountWhite(Fname);

    printf("Number of white spaces are : %d\n",iRet);
    
    return 0;
}