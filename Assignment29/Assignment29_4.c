//////////////////////////////////////////////////////
//
//  File name : Assingment29_4.c
//  Author : Bhagyashri Babasaheb Fulari
//  Description : Write application which accepts file name and character from user 
//                return number of occurance of that character from that file.
//  Date : 13/07/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

int CountChar(char * Fname, char cVal)
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
                if(Buffer[iCnt] == cVal)
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
    char ch = '\0';
    char Fname[50] = {'\0'};

    printf("Enter file name : \n");
    scanf("%s",Fname);

    printf("Enter the character : \n");
    scanf(" %c",&ch);

    iRet = CountChar(Fname, ch);

    printf("Frequency of character %c is : %d\n",ch,iRet);
    
    return 0;
}