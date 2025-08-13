//////////////////////////////////////////////////////
//
//  File name : Assingment28_5X.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write application which accepts file name and string from user and write that string at the end of the file.
//  Date : 10/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>
#include<string.h>

void AppendData(char * Fname, char * Buffer)
{
    int fd = 0;
    int iRet = 0;

    fd = open(Fname, O_WRONLY);

    if(fd == -1)
    {
        printf("File doesn't exists\n");
    }
    else
    {
        lseek(fd, 0, SEEK_END);
        iRet = write(fd, Buffer, strlen(Buffer));

        printf("%d bytes written\n",iRet);

        close(fd);
    }
}

int main()
{
    
    char Fname[50] = {'\0'};
    char Buffer[50] = {'\0'};

    printf("Enter file name : \n");
    scanf("%s",Fname);

    printf("Enter string : \n");
    scanf(" %[^'\n']s",Buffer);

    AppendData(Fname, Buffer);
    
    return 0;
}