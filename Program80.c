#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[],int iSize)
{
    int iSum = 0 , iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    } 
    return iSum ;
}

int main()
{ 
    int iLength = 0, iCnt = 0 , iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Addition(ptr,iLength);
    printf("Addition is : %d",iRet);

     
    free(ptr);

    return 0;
}

/*
    Step 1 : Accept the number of elements form user
    Step 2 : Allocate that memory dynamically
    Step 3 : Accept the values and store into the dynamic memory
    Step 4 : Perform the operations (Logic)
    Step 5 : Deallocate that memory
*/