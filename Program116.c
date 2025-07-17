// Row : 4
// Column : 3
/*
    * * * 
    * * * 
    * * * 
    * * *
*/

#include<stdio.h>

void Display(int iNo)
{
   int i = 0 , j = 0;

   for(i = 1; i <= 4; i++)
   {
        for(j = 1; j <= 3; j++)
        {
            printf("*\t");
        }
        printf("\n");
   }
  
}

int main()
{
    int iValue = 0;

    //printf("Enter the number : \n");
    //scanf("%d",&iValue);

    Display(iValue);

    return 0;
}