#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt>=1; iCnt--)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iFrequency = 0;
    printf("Enter the Frequency : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    return 0;
}