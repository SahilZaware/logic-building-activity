#include<stdio.h>

void Display(int *ptr, int iSize)
{
    int iCnt = 0;

    printf("Values of the array are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",*ptr);
        ptr++ ;
    }
}

int main()
{
    int Arr[6] ;
    int iCnt = 0;

    printf("Please enter the values : \n");

    for(iCnt = 0; iCnt < 6; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr,6);  // Display(100)

    return 0;
}