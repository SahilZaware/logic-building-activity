#include<stdio.h>

int main()
{
    int Arr[4] ;
    int iCnt = 0;
    int iSum = 0;

    printf("Please enter the values : \n");

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    //    1         2        3
   for(iCnt = 0; iCnt < 4; iCnt++)
   {        
        iSum = iSum + Arr[iCnt];  // 4
   }

   printf("Addition is : %d",Arr[iCnt]);

    return 0;
}