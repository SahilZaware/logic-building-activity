#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[] , int iSize, int iNo)
{  
    int iFrequency = 0;
    int iCnt = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
      if(Arr[iCnt] == iNo)
      {
        iFrequency++;
      }
    }

    return iFrequency;

}
int main()
{     
   // 1 .Accept The Number Of Elements From User
    int iLength = 0;
    int *ptr = NULL ;  //ptr navacha pointer
    int iCnt = 0;
    int iResult = 0;

    int iValue = 0;

    printf("Enter the Number of Elements: \n");
    scanf("%d",&iLength);    //Number Of element

    ptr = (int *) malloc(iLength * sizeof(int));   //(int * -mul cut padtil) malloc(ilength * sizeof(int))=(int *) malloc(5*4)

    printf("Enter The Elements : \n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //4. Perform Operations(Logic)
  printf("Enter  the Number YOu Want to Search:");
  scanf("%d",&iValue);

  iResult = Frequency(ptr,iLength,iValue);
  printf("frequency Of %d is: %d",iValue,iResult);
 

   //5.Deallocate The Memory
    free(ptr);
    
    return 0;
}
