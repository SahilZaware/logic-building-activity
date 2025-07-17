#include<stdio.h>
#include<stdlib.h>

void ReverseDisplay(int Arr[],int iSize)
{
   int iCnt = 0;

   for(iCnt = iSize-1 ; iCnt >= 0; iCnt--)
   {
        printf("%d\n",Arr[iCnt]);
   }

} 

int main()
{ 
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements in Reverse Order are : \n");

    ReverseDisplay(ptr,iLength);

     
    free(ptr);

    return 0;
}
