//input 5   5
/*
1   2   3   4   5   6
1   2               6
1       3           6
1           4       6
1               5   6 
1   2   3   4   5   6
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;

    if((iRow < 0) || (iCol < 0))
    {
        printf("You entered invalid number of parameters : \n");
        return ;
    }

    if(iRow != iCol)
    {
        printf("Please enter same number of rows and columns \n");
        return ;
    }

    for(i = 1; i <= iCol; i++)
    {
        for(j = 1; j <= iRow; j++)
        {
            if((i == 1) || (i == iCol) || (j == 1) || (j == iRow) || (i == j))
            {
                printf("%d   ",j);
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}