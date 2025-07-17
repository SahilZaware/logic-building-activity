// Accept The n number From User And Return The Addition Of This Element
#include<stdio.h>
#include<stdlib.h>

void  EvenDisplay(int Arr[] , int iSize)
{  
    int iSum = 0;
    int iCnt = 0;
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
      if((Arr[iCnt])==0)
      {
        printf("%d ",Arr[iCnt]);
      }
    }
    

}
int main()
{     
   // 1 .Accept The Number Of Elements From User
    int iLength = 0;
    int *ptr = NULL ;  //ptr navacha pointer
    int iCnt = 0;
    int iResult = 0;

    printf("Enter the Number of Elements: \n");
    scanf("%d",&iLength);    //Number Of element

    ptr = (int *) malloc(iLength * sizeof(int));   //(int * -mul cut padtil) malloc(ilength * sizeof(int))=(int *) malloc(5*4)

    printf("Enter The Elements : \n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    //4. Perform Operations(Logic)

  EvenDisplay(ptr,iLength);
  
 

   //5.Deallocate The Memory
    free(ptr);
    
    return 0;
}
