#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("The Number of Even Digits are : %d",iRet);

    return 0;
}