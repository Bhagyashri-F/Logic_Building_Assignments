//////////////////////////////////////////////////////
//
//  File name : Assingment29_5.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write application which accepts file name and number from user 
//                read that number of characters from starting position
//  Date : 13/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

void Display(char * Fname, int no)
{
    int fd = 0;
    int iCnt = 0;
    int data = 0;
    char *Buffer[100] = {'\0'};

    fd = open(Fname, O_RDONLY);

    if(fd == -1)
    {
        printf("File is empty\n");
    }

    else
    {
        data = read(fd, Buffer, no);
        printf("%s", Buffer);
    }
}

int main()
{
    int iRet = 0;
    int no = 0;
    char Fname[50] = {'\0'};

    printf("Enter file name : \n");
    scanf("%s",Fname);

    printf("Enter the Number : \n");
    scanf("%d",&no);

    Display(Fname, no);
    
    return 0;
}