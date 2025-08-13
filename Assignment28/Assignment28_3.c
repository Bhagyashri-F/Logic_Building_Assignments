//////////////////////////////////////////////////////
//
//  File name : Assingment28_3.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write application which accepts file name and read all data from that file and display it on screen
//  Date : 10/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<string.h>

void ReadData(char * FileName)
{
    int fd = 0;
    int iRet = 0;
    char Buffer[50] = {'\0'};

    fd = open(FileName, O_RDONLY);

    if(fd != -1)
    {
        while((iRet = read(fd,Buffer, 10)) != 0)
        {
            printf("%s",Buffer); 
            memset(Buffer, '\0', 10);
        }

        close(fd);
    }
    else
    {
        printf("File does not exist\n");
    }
}

int main()
{
    char FileName[50] = {'\0'};

    printf("Enter the name of file : \n");
    scanf("%s",FileName);

    ReadData(FileName);

    return 0;
}