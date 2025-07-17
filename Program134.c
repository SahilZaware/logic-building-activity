// Input : Row : 4 , Column : 4
/*
Output : a b c d 
         a b c d 
         a b c d 
         a b c d 
*/   

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0 , j = 0;
    char ch = 'a';

    for(i = 1; i <= iRow; i++ )
    {
        for(j = 1 , ch = 'a'; j <= iCol; j++ , ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("Enter the number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of Columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);

    return 0;
}