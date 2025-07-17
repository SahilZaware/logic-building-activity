#include<stdio.h>

int SumEvenDigits(int iNo)
{
    int iDigit = 0 , iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSum = iSum + iDigit ;
        }
        iNo = iNo / 10;
    } 
    return iSum ;   

}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the elements : \n");
    scanf("%d",&iValue);

    iRet = SumEvenDigits(iValue);

    printf("Summation of all even digits is : %d",iRet);
    return 0;
}