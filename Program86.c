#include<stdio.h>
#include<stdlib.h>

int AdditionOdd(int Arr[],int iSize)
{
    int iCnt = 0 , iCount = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iSum = iSum + Arr[iCnt];
        }
        return iSum;
    } 
}

int main()
{ 
    int iLength = 0, iCnt = 0 , iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = AdditionOdd(ptr,iLength);
    printf("Addition of Odd Integers : %d",iRet);

     
    free(ptr);

    return 0;
}

/*
    Step 1 : Accept the number of  elements from the user.
    Step 2 : Allocate the memory dynamically
    Step 3 : 
    Step 4 : 
    Step 5 :
*/