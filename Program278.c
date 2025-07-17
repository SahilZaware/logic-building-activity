//4 
// 1 + 2 + 3 + 4 = 10

#include<stdio.h>

int AdditionI(int iNo)
{
    int iCnt = 1 , iSum = 0;

    while(iCnt <= iNo)
    {
        iSum = iSum + iCnt;
        iCnt++;
    }
    return iSum;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    iRet = AdditionI(iValue);

    printf("Addition is : %d",iRet);

    return 0;
}