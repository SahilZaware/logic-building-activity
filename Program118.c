// Row : 4
// Column : 4
/*
    # # # #
    # # # #
    # # # #
    # # # #
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
   int i = 0 , j = 0;

   for(i = 1; i <= iRow; i++)   // Outer Loop = Number of Rows
   {
        for(j = 1; j <= iCol; j++)   // Inner Loop = Number of Columns
        {
            printf("#\t");
        }
        printf("\n");
   }
  
}

int main()
{
    int iValue1 = 0 ,iValue2 = 0;

    printf("Enter the number of Rows: \n");
    scanf("%d",&iValue1);

    printf("Enter the number of Columns: \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}