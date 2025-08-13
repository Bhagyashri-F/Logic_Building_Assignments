//////////////////////////////////////////////////////
//
//  File name : Assingment28_2.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write application which accepts file name and create that file
//  Date : 10/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

void CreateFile(char * FileName)
{
    int fd = 0;

    fd = creat(FileName, 0777);
    printf("File created successfully\n");

    fd = open(FileName, O_RDONLY);

    close(fd);
}

int main()
{
    char FileName[50] = {'\0'};

    printf("Enter the name of file : \n");
    scanf("%s",FileName);

    CreateFile(FileName);

    return 0;
}