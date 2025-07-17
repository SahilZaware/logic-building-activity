#include<stdio.h>
#include<stdlib.h>

void DisplayR(int Arr[] , int iSize)
{
    static int i = 0;

    if(i < iSize)
    {
        printf("%d\t",Arr[i]);
        i++ ;
        DisplayR(Arr,iSize);
    }
}

int main()
{
    int *ptr = NULL ;
    int iLength = 0;
    int i = 0;

    printf("Enter the length of array : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the values : \n");

    for(i = 0 ; i < iLength ; i++)
    {
        scanf("%d",&ptr[i]);
    }

    DisplayR(ptr,iLength);

    free(ptr);

    return 0;
}