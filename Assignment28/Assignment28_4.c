//////////////////////////////////////////////////////
//
//  File name : Assingment28_4.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write application which accepts file name and display its size
//  Date : 10/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int DisplaySize(char * FileName)
{
    int fd = 0;
    int iRet = 0;
    int iSize = 0;
    char Buffer[50] = {'\0'};

    fd = open(FileName, O_RDONLY);

    if(fd != -1)
    {
        while((iRet = read(fd,Buffer, 10)) != 0)
        {
            iSize += iRet;
            memset(Buffer, '\0', 10);
        }

        close(fd);

        return iSize;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char FileName[50] = {'\0'};
    int iRet = 0;

    printf("Enter the name of file : \n");
    scanf("%s",FileName);

    iRet = DisplaySize(FileName);

    printf("Size of %s is %d bytes.\n",FileName,iRet);

    return 0;
}