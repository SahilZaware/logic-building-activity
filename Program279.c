//4 
// 1 + 2 + 3 + 4 = 10

#include<stdio.h>

int AdditionR(int iNo)
{
    static int iCnt = 1 , iSum = 0;

    if(iCnt <= iNo)
    {
        iSum = iSum + iCnt;
        iCnt++;
        AdditionR(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);

    iRet = AdditionR(iValue);

    printf("Addition is : %d",iRet);

    return 0;
}