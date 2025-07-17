#include<stdio.h>

void Display(int ptr[], int iSize)
{
    int iCnt = 0;

    printf("Values of the array are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
}

int main()
{
    int Arr[4] ;
    int iCnt = 0;

    printf("Please enter the values : \n");

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display(Arr,4);  // Display(100)

    return 0;
}