#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    char ch1 = '\0';
    char ch2 = '\0';

    int i = 0,j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch1 = 'A', ch2 = 'a'; j <= iCol; j++, ch1++,ch2++)
        {
            if((i % 2) == 0)
            {
                printf("%c  ",ch2);
            }
            else
            {
                printf("%c  ",ch1);
            }
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}