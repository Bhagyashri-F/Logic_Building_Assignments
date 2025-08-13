//////////////////////////////////////////////////////
//
//  File name : Assingment28_1.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write application which accepts file name and open that file in read mode
//  Date : 10/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

void OpenFile(char * FileName)
{
    int fd = 0;

    fd = open(FileName, O_RDONLY);

    if(fd == -1)
    {
        printf("File not found.\nCreating new file by name : %s \n",FileName);
        fd = creat(FileName, 0777);
    }
    else
    {
        printf("File opened successfully\n");
        close(fd);
    }
}

int main()
{
    char FileName[50] = {'\0'};

    printf("Enter the name of file : \n");
    scanf("%s",FileName);

    OpenFile(FileName);

    return 0;
}